# Write your MySQL query statement below
select Date_format(trans_date,'%Y-%m') as month,
country ,
count(id) as trans_count,
count(Case when state='approved' then id end) as approved_count,
sum(amount) as  trans_total_amount ,
sum(Case when state='approved' then amount else 0 end) as approved_total_amount 
from Transactions 
group by month , country;
