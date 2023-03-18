-- DQL(DATA QUERY LANGUAGE)
use classicmodels;
select * from classicmodels.customers;
select * from customers;
SELECT customerName,phone from customers;
-- where 
select * from customers where country="USA" order by customerName;
select * from customers where country="USA" order by customerName desc;
select * from customers  order by city desc ,customerName;

select * from customers order by city;

select * from customers where country="USA" ;

-- LIKE 
% --0 more than 0
_ --1 exact one
like k%
like _m%
select customerName from customers where customerName like "k%";
select customerName from customers where customerName like "%od%";

-- alias pet name

select customerName as cname from customers where customerName like "%od%";

-- limit [startingpoint,]numbeofrecords

select * from customers limit 10;

select * from customers limit 11,10;




