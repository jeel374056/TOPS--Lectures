-- DQL(DATA Query LANGUAGE)
select * from employees;
select employeeNumber,lastName,firstName from employees;
----------------------------------------------------------
select firstName from employees where officeCode=1;
---------------------------------------------------------------
select * from employees order by officeCode;
select * from employees where officeCode=1 order by firstName ;
select * from employees order by officeCode,firstname desc ;
select * from employees order by officeCode desc,firstname ;
--------------------------------------------------------------------------
--  AND OR NOT
select * from employees where officeCode=1 AND reportsTo=1002;
select * from employees where officeCode=1 OR reportsTo=1002;
select * from employees where not officeCode = 1;
---------------------------------------------------------------
-- like 
-- wildcard characters
-- % means 0 1 or more
-- _	means exact one
select * from employees where lastName="Patterson";
select * from employees where lastName like '_at%';
select * from employees where lastName like '_e_n%';
select * from employees where extension like 'x____';
select * from employees where extension like 'x___';
select * from employees where extension like 'x%';
select * from employees where lastName like '%ot%';
select * from employees where lastName like '_a%' or '_e%' or '_h%';
select * from employees where lastName like '_[aeh]%';

select * from customers limit 10;
select * from customers limit 11,30;

use classicmodels;
select customerName as cname from customers where customerNumber between 120 and 210;
select * from customers where customerNumber in (120,121,122,123,124);

-- 
