-- database
-- database create query
create database collegechk;
use collegechk;
-- database delete query
drop database college;

-- table
create table student(
studentid int ,
student_name varchar(20),
age int ,
mobile varchar(10),
email varchar(25),
address varchar(200),
courseid int,
primary key(studentid),
foreign key(courseid) references course(courseid)
);

create table course(
courseid int ,
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