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
 
 
 
 



