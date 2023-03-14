-- aggregate functions
-- min max avg sum count

select max(amount) from payments;
select min(amount) from payments;
select avg(amount) from payments;
select sum(amount) from payments;

select * from customers where country="Australia";
select count(customerNumber) as cnt from customers where country="Australia";

select country,count(customerNumber) from customers group by country;

select customerNumber,sum(amount) from payments group by customerNumber;

SELECT MAX(SALARY) FROM EMPLOYEE GROUP BY DEPARTMENT ORDER BY SALARY;

-- joins

-- SELECT TABLE.FIELDS,TABLE2.FIELDS FROM TABLE1 JOIN TABLE2  
-- ON TABLE1.COMMONFIELD=TABLE2.COMMONFILED;

SELECT payments.*,customers.* from payments inner join customers 
on customers.customerNumber=payments.customerNumber;

select payments.customerNumber,payments.amount,customers.customerName 
from payments inner join customers on customers.customerNumber=payments.customerNumber;

select sum(payments.amount),customers.customerNumber,customers.customerName from payments
 inner join customers on customers.customerNumber=payments.customerNumber group by customers.customerNumber;
 
 
use classicmodels;

 
 
 
