# Write your MySQL query statement below
select Signups.user_id , 
ROUND(COALESCE(SUM(CASE WHEN Confirmations.action = 'confirmed' THEN 1 ELSE 0 END) / COUNT(Confirmations.user_id), 0), 2) AS confirmation_rate
from Signups left join Confirmations 
on Signups.user_id=Confirmations.user_id group by user_id;