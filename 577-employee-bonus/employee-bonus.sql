# Write your MySQL query statement below
##employee se name lena hai
##boujs table se bonus lena hai

SELECT Employee.name, bonus.bonus
FROM bonus
RIGHT JOIN Employee 
USING (empid)
WHERE bonus.bonus <1000 OR bonus.bonus IS NULL;
