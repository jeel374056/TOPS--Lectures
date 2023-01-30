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