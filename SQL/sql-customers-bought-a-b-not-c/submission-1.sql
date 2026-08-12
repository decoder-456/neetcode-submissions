-- Write your query below
select o.customer_id,c.customer_name
from 
(select customer_id
from
(select distinct customer_id
from orders 
where product_name='A'
INTERSECT
select distinct customer_id 
from orders 
where product_name='B') as t
WHERE customer_id NOT IN (
    SELECT customer_id
    FROM orders
    WHERE product_name = 'C'
)) as o
join customers as c
on o.customer_id=c.customer_id
order by customer_name

