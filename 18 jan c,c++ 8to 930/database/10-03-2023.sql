-- DDL(DATA DEFINITION LANGUAGE) 
-- create database databasenamne;
create database university;
create database demo;

-- use databasename
-- error -- no database selected
use university;

-- drop database databasename
drop database demo;

-- TABLE CREATION --- 
create table tablename(
field1 datatype,
field2 datatype,
field3 datatype,

constraints
);

-- DATATYPE
int numbers without ""
varchar(size is compulsory) string in double quotes ""
float decimal values
date year-month-day "2023-3-10"
datetime "2023-03-10 08:42:35"
timestamp "currenttime"


create table course(
courseid int auto_increment,
coursename varchar(20),
duration int,
fees int,
primary key(courseid)
);

create table student(
rollno int auto_increment,
name varchar(50),
age int,
city varchar(20),
courseid int,
primary key(rollno),
foreign key(courseid) references course(courseid)
);

-- ALTER
-- new column add
-- alter table tablename add column columnname datatype;
alter table student add column email varchar(20);
alter table student add column email varchar(30) after name;
alter table student add column email varchar(20) first;
-- change existimg columns --- name datatype
-- alter table tablename change column colunmane datatype;
alter table student change age age varchar(30);
alter table student change age studentage int;

-- delete existing column
alter table tablename drop column columnname;
alter table student drop column email;




-- DML(DATA MANIPULATION LANGUAGE)
-- insert
insert into course(coursename,fees,duration) values("BCA",58900,3);--  best way
insert into course values(2,"BBA",4,54870);

-- update

update tablename set columnname=value where condition;

update course set coursename="BTECH" where courseid=2;

-- delete
-- delete from tablename where condition;
delete from course where courseid=2;




