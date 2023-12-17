/* 
		11
*/

create table salseperson (
SNo int primary key,
SNAME varchar(50),
CITY varchar(50),
COMM int
);

insert into salseperson (SNo,SNAME,CITY,COMM) values (1001,'Peel','London',012);
insert into salseperson (SNo,SNAME,CITY,COMM) values (1002,'Serres','San Jose',.13);
insert into salseperson (SNo,SNAME,CITY,COMM) values (1004,'Motika','London',.11);
insert into salseperson (SNo,SNAME,CITY,COMM) values (1007,'Rafkin','Barcelona',.15);
insert into salseperson (SNo,SNAME,CITY,COMM) values (1003,'Axelrod','New York',.1);

create table customer(
CNM int primary key,
CNAME varchar(50),
CITY varchar(50),
Rating int,
SNo int,
foreign key (SNo) references salseperson(SNo)
);