-- Agregate function 
-- min max avg sum count
select sum(amount) from payments;
select max(amount) from payments;
select min(amount) from payments;
select avg(amount) from payments;
select count(amount) from payments where customerNumber=121;

select customerNumber,sum(amount) from payments group by customerNumber;
select country,count(customerNumber) from customers group by country;
select country,count(customerNumber) from customers group by country order by country desc;

SELECT * FROM classicmodels.payments;
select customerNumber,sum(amount) from payments group by customerNumber having sum(amount)<50000;
select customerNumber,sum(amount) from payments  where customerNumber>300 group by customerNumber having sum(amount)<50000 ;

select from tablename where group by having order by 

