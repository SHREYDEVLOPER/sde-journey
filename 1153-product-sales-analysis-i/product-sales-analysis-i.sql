# Write your MySQL query statement below
##Write a solution to report the product_name, year,
## and price for each sale_id in the Sales table.

##isme mai left join lagega
SELECT sales.year, sales.price, product.product_name 
FROM sales 
LEFT JOIN product 
using(product_id);
