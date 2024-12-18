# Write your MySQL query statement below
##Write a solution to find the IDs of the users who visited without making any
## transactions and the number of times they made these types of visits.
## customer id from visi
##two tables are given
##table one name is visits
##Transactions
##things to find
##ids 
##who visited without making any payments
SELECT v.customer_id, COUNT(v.visit_id) AS count_no_trans 
from Visits v 
LEFT JOIN Transactions t 
ON v.visit_id = t.visit_id  
WHERE t.transaction_id IS NULL 
GROUP BY v.customer_id; 
