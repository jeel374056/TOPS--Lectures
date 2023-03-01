-- DML(DATA MANIPULATION LANGUGAE)
-- insert

-- insert into tablename (couln1,column2,clumn3) values(value1,value2,value3);
insert into department(deptname,location,deptdesc,total_emp) 
values("Accounts","Surat","Accounting doing",6),
("Admission","Vapi","Admission doing",12);

insert into department values(4,"clerk","VAdodara","Extra task",12);
-- update 

-- update table set colunmane =values where condition
update department set deptname = "Masnagement" where deptid=2;
-- delete

-- delete from tablenamae where condition;
delete from department where deptid=3; 

drop table karigar;
truncate table employee;



show tables;

-- DQL(DATA QUERY LANGUAGE)

select * from department;
select deptname,location from department;









