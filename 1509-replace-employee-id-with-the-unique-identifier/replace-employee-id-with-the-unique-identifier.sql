# Write your MySQL query statement below
##employees mai sename lena hai
##EmployeeUNI se unique_id
select EmployeeUNI.unique_id,Employees.name
FROM Employees left join EmployeeUNI 
using (id);
