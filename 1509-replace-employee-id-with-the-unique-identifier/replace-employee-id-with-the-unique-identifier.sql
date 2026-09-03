# Write your MySQL query statement below
SELECT eu.unique_id, e.name
FROM EMPLOYEES as e
LEFT JOIN EMPLOYEEUNI AS eu
ON e.id=eu.id
