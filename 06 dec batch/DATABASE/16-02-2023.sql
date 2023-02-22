create table student(
rollno int,
name varchar(20),
age int,
address varchar(50),
course_id_student int,
primary key (rollno),
foreign key(course_id_student) references course(courseid)
);

create table course
(
courseid int auto_increment,
course_name varchar(20),
fees int,
duration_years int,
primary key(courseid)
);
------------------------------------------------------------------------------------
-- alter

-- new field add
-- alter table tablaname add column columnname datatype [constraints]
alter table course add column faculty varchar(20);

-- drop table field
-- alter table tablename drop column columnname
alter table course drop column faculty;

-- change datatype
-- alter table tablename change column oldcolumnaname newcolunmane datatype;
alter table course change column fees fees varchar(20);

-- change name
-- add constraints
alter table course change column fees course_fees int;

-- alter table tablename rename column oldname to newname;
alter table course rename column duration_years to years;

---------------------------------------------------------------------
-- DML(DATA MANIPULATION LANGUAGE)
-- insert
-- insert into tablename(field1,feld2,filed3....) values(value1,value2,value.......)
insert into course(course_name,course_fees,duration_years) values("BCA",55800,3);
insert into course(course_name,course_fees,duration_years) values("MCA",48500,3);
insert into course(course_name,course_fees,duration_years) values("BE",78954,3);

-- insert into tablename values() values (values1,value2,value3)
insert into course values(4,"BSC",45621,4);
-- Error Code: 1062. Duplicate entry '4' for key 'PRIMARY'

insert into course values("BSCIT",12458,5);
-- Error Code: 1136. Column count doesn't match value count at row 1

-------------------------------------------------------------------------
-- update
-- update tablename set columnname =new_value [where condition];
update course set course_name="MCA",course_fees=24589 where courseid=2;

-----------------------------------------------------------------------------
-- delete
-- delete from tabelaname where condition;
delete from course where courseid=3;



