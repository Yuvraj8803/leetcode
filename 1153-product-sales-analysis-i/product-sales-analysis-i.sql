# Write your MySQL query statement below
SELECT second.product_name,first.year,first.price
FROM Sales as first
JOIN Product as second
on first.product_id = second.product_id