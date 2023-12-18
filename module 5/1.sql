/* 1. Create Table Name : Student and Exam */
create database school_manage_sys;
use school_manage_sys;
create table student (Rollno int primary key auto_increment,
						name varchar(100),branch varchar(100));
insert into student (name,branch) values ('Jay','Computer Science');
insert into student (name,branch) values ('Suhani','Electronic and com');
insert into student (name,branch) values ('Kriti','Electronic and com');

create table exam(
Rollno int,
S_code varchar(100),
Marks int,
P_code varchar(50),
foreign key (Rollno) references student(Rollno));

insert into exam (Rollno,S_code,Marks,P_code)values(4,'CS11',50,'CS');
insert into exam (Rollno,S_code,Marks,P_code)values(4,'CS12',60,'CS');
insert into exam (Rollno,S_code,Marks,P_code)values(5,'EC101',66,'EC');
insert into exam (Rollno,S_code,Marks,P_code)values(5,'EC102',70,'EC');
insert into exam (Rollno,S_code,Marks,P_code)values(6,'EC101',45,'EC');
insert into exam (Rollno,S_code,Marks,P_code)values(6,'EC102',50,'EC');





