-- database
-- database create query
create database mycollage;
use mycollage;
-- database delete query
drop database mycollage;

-- table
create table student(
studentid int auto_increment ,
student_name varchar(20),
age int ,
mobile varchar(10),
email varchar(25),
address varchar(200),
courseid int,
primary key(studentid),
foreign key(courseid) references course(courseid)
);

drop table course;
create table course(
courseid int auto_increment,
 course_name varchar(20),
fees int,
primary key(courseid)
);

-- for delete table drop and truncate

drop table student;-- it will delete whole table with record and structure(schema) both
truncate table student;-- it will just delete all records but not delete structure

-- alter
/*
add column
rename column
		change-- name and datatype ---
		rename---only name change ---to
remove column

rename table
*/
-- add columns

alter table course  add column blood_group varchar(3);
-- rename column
alter table course rename column age to student_age;
-- change column
alter table student change mobile student_mobile varchar(15);

-- insert

insert into course(course_name,fees) values ("MCA",60000);

insert into student(student_name,age,mobile,email,address,courseid)
values ("Yash Chapla",28,"965478123","yash@gmail.com","surat",2)

-- update 
-- update tablename set columnname ="Vadodara" where condition;

update student set student_city="Surat" where student_name="neel";

-- delete 
-- delete from tablename where condition

delete from student where studentID=5;








