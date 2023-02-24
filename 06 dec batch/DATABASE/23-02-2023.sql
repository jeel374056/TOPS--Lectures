-- union
use college; 
drop table demo1;
drop table demo2;
create table demo1
(
id int primary key,
name_ varchar(20),
password_ varchar(25)
);
create table demo2
(
id int primary key,
name_ varchar(20),
password_ varchar(25)
);

insert into demo1 values(1,"Rahul","1234"),(2,"vaibhav","1234"),(3,"Sachin","1234");
insert into demo2 values(1,"Gaurav","1234"),(2,"JAy Dabhi","1234"),(3,"Sachin","1234");
select * from demo1 union all select * from demo2;
select * from demo1 union select * from demo2;

-- Joins 
-- select fieldnames from table1 join type table2 on table1.column=table2.column
select s.*,c.* from student as s inner join course as c on s.course_id_student=c.courseid;
select course.*,student.* from course left join student on student.course_id_student=course.courseid;
select student.*,course.* from course right join student on student.course_id_student=course.courseid;

create table student32
(
id int,
name_ varchar(25),
monitor int,
primary key(id),
foreign key(monitor) references student32(id)
);

-- insert into student32(1,"Ram");
 use classicmodels;
select payments.*,customers.* from payments inner join customers on payments.customerNumber=customers.customerNumber where payments.amount>600000;
select payments.*,customers.* from payments right join customers on payments.customerNumber=customers.customerNumber;
select payments.*,customers.* from payments left join customers on payments.customerNumber=customers.customerNumber;
select payments.*,customers.* from payments cross join customers on payments.customerNumber=customers.customerNumber;

select * from customers where exists (select *  from payments where amount>600000); 