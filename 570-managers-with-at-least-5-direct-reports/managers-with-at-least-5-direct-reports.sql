# Write your MySQL query statement below
SELECT e.name
FROM Employee e
JOIN Employee eu
ON e.id=eu.managerId
GROUP BY eu.managerId
HAVING COUNT(eu.managerId)>=5