-- DQL(DATA Query Language)
select * from student;
select studentname,age from student;
select * from student where studentname="ramesh";
select * from student order by age ;
select * from student order by age desc;
select * from student order by studentname desc ;
select * from student where studentname="ramesh" and age>50;
select * from student where studentname="ramesh" or age>50;
select * from student where not studentname="ramesh";

-- aggregate functions
-- sum min max avg count
select count(courseID) from course where totalyear=3;
select sum(totalfees) from course where totalyear =3;
select max(totalfees) from course;
select min(totalfees) from course;
select avg(totalfees) from course;

-- group by

select totalyear,sum(totalfees) from course group by totalyear;
select coursename,sum(totalfees) from course group by coursename;

-- having
select totalyear,sum(totalfees) from course group by totalyear
 having sum(totalfees)>200000
 
 -- joins
 -- inner join
 
 select student.*,course.* from student inner join course on student.courseid=course.courseid;
 select student.*,course.* from student left join course on student.courseid=course.courseid;
 select student.*,course.* from student right join course on student.courseid=course.courseid;
 select student.*,course.* from student cross join course on student.courseid=course.courseid;
 -- limit
use classicmodels;
select * from customers limit 20;
select * from customers limit 21,50;
 -- alias
 select customerName,city from customers;
 select customerName as Cname,city as customercity from customers;
 
 -- like
 % single character or more than one zero also
 _ single character
 select * from customers where customerName like '%he%';
 select * from customers where customerName like '_y_%';
 -- in
 select * from customers where salesRepEmployeeNumber in (1611,1166,1216);
 
 -- between
  select * from customers where salesRepEmployeeNumber between 1601 And 1620;

 -- distinct
 -- unique values aaavse
 select distinct(customerName) from customers;
 
 -- union
 -- jyare 2 same type naa table naa data ek haare joyee
 -- tyare union use karvanu
 select * from person union select * from employee;
 
 -- TCL(TRANSACTION CONTROL LANGUAGE)
 
use college

start transaction;
savepoint b;
insert into student(sname,age,mobile,courseid) values("Satish",45,"9874563214",2);
insert into student(sname,age,mobile,courseid) values("rashagb",45,"9874563214",2);
savepoint a;
insert into student(sname,age,mobile,courseid) values("wefdwe",45,"9874563214",2);
insert into student(sname,age,mobile,courseid) values("wefwef",45,"9874563214",2);
insert into student(sname,age,mobile,courseid) values("wedfwe",45,"9874563214",2);

rollback to a;

commit;


create table backup_course
(
courseid int primary key,
coursename varchar(20),
fees int
);

call procedure1("Yash");

call procedure2(50,"Satish");




