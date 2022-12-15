use collegedb;
alter table course add column fees int;
--  remove column
alter table course drop column fees;

alter table course rename column address to student_Address;

