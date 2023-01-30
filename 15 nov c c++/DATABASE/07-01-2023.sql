-- alter

-- add column
use university;
alter table student add column mobileno int after ;

alter table student add column mobileno int after student_name;
alter table student add column bfd int first ;

-- changing datatype
alter table student modify column mobileno varchar(10);

-- deleting paryticular column;
alter table student drop column mobileno;

DML(DATA MANIPULATION LANGUAGE)
	insert
    update 
    delete
    
-- insert
insert into course(course_id,course_name,fees,duration)
values (1,"BBA",50000,3);

insert into course(course_id,course_name) values
(2,"BCA");
insert into course values(3,"MBA",45000,5);

-- update

update tablename set columname=value[ where condition]

update course set course_name = "MSCIT" where course_name="MBA";


-- delete 

delete from table [where condition;]

delete from course where course_id = 1;

insert into student values(102,"Kailash",52,9);

Error Code: 1452. Cannot add or update a child row: a foreign key
 constraint fails (`university`.`student`, CONSTRAINT `student_ibfk_1`
 FOREIGN KEY (`courseid`) REFERENCES `course` (`course_id`))
 
 -- truncate
 
 truncate table tablename;
 
 truncate table student;
 
 use classicmodels;
 
 DQl(DATA QUERY LANGUAGE )
 
 select   from
 
 select customerNumber,contactLastName,customerNumber from customers;
 
 select * from customers;
 
 -- where
 
 select * from customers where country="USA" ;
 select * from customers where country="USA" And city="NYC";
 select * from customers where country="USA" OR country="Spain";
 select * from customers where not country="USA";
 
 select customerNumber as C_no,contactLastName as C_lname from customers
 where country="USA";
 
 select distinct(country) from customers;
 select * from customers order by customerName;
 select * from customers where not country="USA" order by customerName desc;
 
 
 
 