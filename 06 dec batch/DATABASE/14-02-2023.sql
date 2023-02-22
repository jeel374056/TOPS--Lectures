/*
MYSQl
DDL(DATA Definition	 LANGUAGE)
	CREATE
    ALTER
    DROP
    TRUNCATE
	KEYS
		PRIMARY
		FOREIGN KEY
        SUPER KEY
        CANDIDATE KEY
        UNIQUE KEY
DML(DATA MANIPULATION LANGUAGE)
	INSERT
    UPDATE
    DELETE
DQL(DATA QUERY LANGUAGE)
	SELECT
    FROM
    WHERE
    HAVING
    GROUP BY
    ALIAS
    ORDER BY
		DESC
    AGGREAGATE FUNCTIONS
		MIN MAX SUM AVG COUNT
	LIMIT
    lOGICAL OPEARTORS
		AND OR NOT
	IN
    BETWEEN
    LIKE
		WILDCARD CHARACTERS
			MYSQL	2	% _
            SQL	6
	EXISTS
    ANY ALL
    UNION
    UNION ALL
    JOINS
		INNER JOIN
        OUTER JOIN
        FULL JOIN
		RIGHT JOIN
        LEFT JOIN
DCL (DATA CONTROL LANGUAGE)
	GRANT
    REVOKE
TCL(TRANSACTION CONTROL LANGUAGE)
	COMMIT
    ROLLBACK
    SAVEPOINT
    TRANSACTIONS
VIEWS
	DQL
TRIGGERS
	BEFORE
    AFTER
		INSERT 
		UPDATE 
		DELETE
PROCEDURE
	IN
    OUT
    IN OUT
*/
-- DDL
-- create database databasename
create database college;
-- use databasename
use college;

-- drop database databasename
drop database college;

-- tables
-- create table tablename(
-- datatype field1,
-- dataype2 field2,
-- datatype3 field3,
-- -- constraints
-- );

create table student(
rollno int auto_increment,
student_name varchar(20),
primary key(rollno)
);

drop table student;


