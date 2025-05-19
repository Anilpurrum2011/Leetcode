# Write your MySQL query statement below
select a.name as Customers
from customers a
left join orders c on a.id=c.customerid
where c.customerid is null;