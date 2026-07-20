# Write your MySQL query statement below
select Tweets.tweet_id from Tweets where Char_length(content)>15;