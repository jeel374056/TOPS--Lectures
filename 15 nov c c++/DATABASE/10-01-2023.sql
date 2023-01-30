
select * from customers where city="NYC";

-- aggregate function
select distinct(city) from customers;
select count(customerNumber) as total_NYC from customers where city="NYC";

select avg(amount) from payments ;

select sum(amount) from payments;

select min(amount) from payments;
select max(amount) from payments;

select city,count(customerNumber) from customers group by city;

select customerNumber,sum(amount) from payments group by customerNumber;

select city from customers group by city having count(customerNumber)>2 ;

select customerNumber from payments group by customerNumber having
sum(amount)>250000;

-- limit

select * from customers limit 10;
select * from customers limit 11,5;

select * from customer union select * from employee;
-- not give duplicates records
select * from customer union all select * from employee;
-- gives all records duplicates also

select * from payments where customerNumber in (112,119,121);
select * from payments where customerNumber =112 or customerNumber=119 or
 customerNumber=121;

select * from customers where customerNumber>110 and customerNumber<140;

select * from customers where customerNumber between 110 and 115;

-- LIKE
-- _ single character 
-- % zero ,one or more than one charcater

select * from customers where customerName like "_k%";
select * from customers where customerName like "% %";

-- "__p_k%"
-- "% %"


-- JOINS
-- select student.name,student.age,coursee.name,course.fees from student 
-- join_type join On/where course.courseid=student.courseid order by group 
-- by having 

use classicmodels;
inner join



left join

right join

select products.*,orderdetails.* from orderdetails right join products on products.productCode
=orderdetails.productCode;

cross join

select customers.customerName,payments.amount from customers inner join payments where customers.customerNumber
=payments.customerNumber ;
select customers.customerName,sum(payments.amount) from customers inner join payments where customers.customerNumber
=payments.customerNumber group by customers.customerName ;
select customers.customerName,sum(payments.amount) from customers left join payments on customers.customerNumber
=payments.customerNumber group by customers.customerName ;
select customers.customerName,sum(payments.amount) from customers right join payments on customers.customerNumber
=payments.customerNumber group by customers.customerName ;
select customers.customerName,sum(payments.amount) from customers left join payments where customers.customerNumber=payments.customerNumber group by customers.customerName ;

select * from employee order by first_name ,salary desc,age ;
select * from employee order by first_name ;


-- TCL 

start transaction;
savepoint a;
insert into student(sname,age,mobile,courseid) values("Viraj",48,"8789859654",3);
insert into student(sname,age,mobile,courseid) values("jkhgfws",48,"65464",3);
savepoint b;
insert into student(sname,age,mobile,courseid) values("Virfwefwaj",48,"6546489",3);
insert into student(sname,age,mobile,courseid) values("wfwe",48,"4546454",3);
rollback to b;

commit;








