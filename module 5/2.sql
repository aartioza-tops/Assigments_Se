/*
2. Create table given below: Employee and IncentiveTable
*/
create database company;
use company;
create table employee(
	Employee_id int primary key auto_increment,
    First_name varchar(50),
    Last_name varchar(50),
    Salary int8,
    Joining_date datetime,
    Department varchar(50)
);

insert into employee (First_name,Last_name,Salary,Joining_date,Department)
values ('John','Abhrahm',1000000,'2013-01-13 12:00:00','Banking');
insert into employee (First_name,Last_name,Salary,Joining_date,Department)
values ('Michael','Clarke',800000,'2013-01-1 12:00:00','Insurance'),
('Roy','Thomas',700000,'2013-02-1 12:00:00','Banking'),
('Tom','Jose',600000,'2013-02-1 12:00:00','Insurance');
insert into employee (First_name,Last_name,Salary,Joining_date,Department)
values ('jerry','Pinto',650000,'2013-01-13 12:00:00','Insurance');
insert into employee (First_name,Last_name,Salary,Joining_date,Department)
values ('Philip','Mathew',750000,'2013-01-01 12:00:00','Services');
insert into employee (First_name,Last_name,Salary,Joining_date,Department)
values ('TestName1','123',650000,'2013-01-01 12:00:00','Services');
insert into employee (First_name,Last_name,Salary,Joining_date,Department)
values ('TestName2','Lname%',600000,'2013-01-01 12:00:00','Insurance');

create table Insentive(
	Employee_ref_id int primary key auto_increment,
    Incentive_date date,
    Incentive_amount int
);

insert into Insentive (Incentive_date,Incentive_amount) values ('1-FEB-2013',5000);
insert into Insentive (Incentive_date,Incentive_amount) values ('1-FEB-2013',3000);
insert into Insentive (Incentive_date,Incentive_amount) values ('1-FEB-2013',4000);
insert into Insentive (Incentive_date,Incentive_amount) values ('1-JAN-2013',4500);
insert into Insentive (Incentive_date,Incentive_amount) values ('1-JAN-2013',3500);




