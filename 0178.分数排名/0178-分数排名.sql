# Write your MySQL query statement below
select s1.Score as Score, 
    (select 
        count(distinct s2.Score)
        from Scores s2
        where s2.Score>=s1.Score) as 'Rank' #新版本中Rank为关键字，不能直接使用为名称
from Scores s1
order by s1.Score desc