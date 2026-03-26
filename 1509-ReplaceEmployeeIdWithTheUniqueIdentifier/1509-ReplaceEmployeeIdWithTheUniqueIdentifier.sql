-- Last updated: 3/26/2026, 1:25:52 PM
# Write your MySQL query statement below
# Write your MySQL query statement below
SELECT EmployeeUNI.unique_id,Employees.name 
FROM Employees
LEFT JOIN EmployeeUNI ON EmployeeUNI.id = Employees.id; 