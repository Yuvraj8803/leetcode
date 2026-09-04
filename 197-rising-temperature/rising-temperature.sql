# Write your MySQL query statement below
SELECT W.id FROM Weather W 
JOIN Weather V ON DATEDIFF(W.recordDate,V.recordDate)=1
WHERE W.temperature>V.temperature