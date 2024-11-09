# Write your MySQL query statement below
SELECT unique_id, name
FROM Employees e left
JOIN EmployeeUNI eu
    ON e.id = eu.id;
