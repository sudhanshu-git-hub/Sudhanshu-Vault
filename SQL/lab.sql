use users;
create TABLE Department(
        D_ID char(255),
        D_NAME varchar(255),
        H_O_D varchar(255),
        PRIMARY KEY(D_ID));
        
SELECT * from Department;
insert into Department values('d001','production','john');
insert into Department values('d002','marketing','smith');
insert into Department values('d003','system','shane');
insert into Department values('d004','sales-purchase','alan');
insert into Department values('d005','accounts','mark');
-- SELECT * from Department;

create TABLE Employee(
        E_ID char(255),
        E_name varchar(255),
        D_ID char(255) references Department(D_ID),
        Job varchar(255),
        HIREDATE Date,
        Salary INT,
        Grade char(1),
        Manager varchar(255),
        Location varchar(255),
        Primary KEY(E_ID)
            );
            
insert into Employee values('e001','sophie','d002','clerk','1983-08-18',15000,'A','synthia','dallas');
insert into Employee values('e002','harry','d004','clerk','1986-07-21',17000,'C','damon','berlin');
insert into Employee values('e003','jack','d003','assistant','1989-12-12',16000,'C','henry','dallas');
insert into Employee values('e004','led','d002','assistant','1983-04-13',12000,'B','marshal','london');
insert into Employee values('e005','lily','d004','secretary','1985-03-01',20000,'D','marshal','dallas');
insert into Employee values('e006','daniel','d003','secretary','1983-11-19',14000,'C','henry','hungry');
insert into Employee values('e007','patricia','d001','chairman','1990-09-04',23000,'D','synthia','washington');
insert into Employee values('e008','ulga','d004','chairman','2009-02-15',25000,'A','damon','berlin');
-- SELECT * from Employee;

-- 1
select E_name,HIREDATE from Employee where 
                                D_ID=(
                                select D_ID from Department where D_NAME='system'
                                );

-- 2
 select e_name,timestampdiff(year,hiredate,curdate()) Length_Of_Service from employee;

-- 3
 select Max(Salary) from Employee where Salary<>(select Max(Salary) from Employee);

-- 4
select E_name,Department.D_NAME from Employee,Department  where Department.D_ID=Employee.D_ID order by Employee.D_ID;

-- 5
select E_name,Manager,Min(Salary) from Employee group by Manager;

-- 6
select D_NAME from Department where D_ID NOT IN(select distinct Department.D_ID from Department join Employee where Department.D_ID = Employee.D_ID);

-- 7
select E_name,Max(Salary),Job from Employee group by job order by Max(Salary) desc;

-- 8
select year,Max(Number_Emp_Joined) from ( select year(hiredate) year,count(hiredate) Number_Emp_Joined from employee group by year(hiredate)) as New_Table;

-- 9


-- 10
select e_name,salary from employee where salary between 10000 AND 20000;

-- 17
select e_name,job,salary,grade,department.d_name from employee,department where employee.d_id=department.d_id AND job <>'clerk' order by employee.e_name;

-- 18
select e_name,job,MIN(salary) from employee group by job order by Min(Salary) desc;

-- 19
select MIN(y),d_id from (select year(curdate())-year(hiredate) y,d_id,hiredate from employee) as New_Table group by D_id order by hiredate desc;
 
 -- 20
 select max(salary)-min(salary) from employee;
