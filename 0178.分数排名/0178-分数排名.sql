# Write your MySQL query statement below
select s1.Score as Score, 
    (select 
        count(distinct s2.Score)
        from Scores s2
        where s2.Score>=s1.Score) as 'Rank' #�°汾��RankΪ�ؼ��֣�����ֱ��ʹ��Ϊ����
from Scores s1
order by s1.Score desc