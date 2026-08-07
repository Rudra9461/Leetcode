SELECT 
    UniqueProducts.product_id,
    COALESCE(LatestPrices.new_price, 10) AS price
FROM (
    -- Step 1: Get every unique product ID in the system
    SELECT DISTINCT product_id 
    FROM Products
) AS UniqueProducts
LEFT JOIN (
    -- Step 2: Extract the most recent price change on or before '2019-08-16'
    SELECT p1.product_id, p1.new_price
    FROM Products p1
    INNER JOIN (
        SELECT product_id, MAX(change_date) AS max_date
        FROM Products
        WHERE change_date <= '2019-08-16'
        GROUP BY product_id
    ) p2 
    ON p1.product_id = p2.product_id 
    AND p1.change_date = p2.max_date
) AS LatestPrices
ON UniqueProducts.product_id = LatestPrices.product_id;
