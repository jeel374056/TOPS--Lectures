-- creating databse
/*
multiline comments

*/
syntax:

create database university;

-- deleting Database
-- drop database Database_name;
drop database university;

use university;

create table tablename(
column1 datatype,
column2 datatype,
.
.
..
.
.
constraints
keys


)


create table student(
student_id int ,
student_name varchar(20),
age int,
courseid int,
primary key(student_id),
foreign key(courseid) references course(course_id)
);

drop table student;

create table course(
course_id int auto_increment,
course_name varchar(50),
fees int,
duration int,
primary key(course_id)
);
drop table course;
