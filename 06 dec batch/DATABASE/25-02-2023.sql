-- TCL
 -- DML
 
 start transaction;
 savepoint a;
 insert into course(course_name,course_fees,duration_years) values("C1",58740,5);
 insert into course(course_name,course_fees,duration_years) values("C2",58740,5);
 insert into course(course_name,course_fees,duration_years) values("C3",58740,5);
 insert into course(course_name,course_fees,duration_years) values("C4",58740,5);
 savepoint b;
 insert into course(course_name,course_fees,duration_years) values("C5",58740,5);
 insert into course(course_name,course_fees,duration_years) values("C6",58740,5);
 insert into course(course_name,course_fees,duration_years) values("C7",58740,5);
 
 rollback;
 rollback to a;
 rollback to b;
 
 commit;
 
 
 create table course_backup(
 courseid int,
 coursename varchar(50),
 fees int,
 duration int
 );
 
 call new_procedure1("BCA")
 call new_procedure2("DTECH",459863,10)
 
 call new_procedure3(@sname)