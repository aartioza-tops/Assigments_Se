/* 3. Get First_Name from employee table using Tom name “Employee Name” */
SELECT First_name FROM employee WHERE First_name LIKE '%Tom%';

/* 4. Get FIRST_NAME, Joining Date, and Salary from employee table.*/
SELECT First_name, Joining_date, Salary FROM employee;

/* 5. Get all employee details from the employee table order by First_Name Ascending and 
Salary descending */
SELECT * FROM Employee ORDER BY First_Name ASC, Salary DESC

/* 6. Get employee details from employee table whose first name contains 'J' */
SELECT * FROM Employee WHERE First_Name LIKE '%J%';

/* 7-8 . Get department wise maximum salary from employee table order by Salary 
ascending */
SELECT Department, MAX(Salary) AS MaxSalary FROM Employee GROUP BY 
Department ORDER BY MaxSalary ASC;

/* 9. Select first_name, incentive amount from employee and incentives table forthose 
employees who have incentives and incentive amount greater than 3000.
*/
SELECT Department, MAX(Salary) AS MaxSalary FROM Employee GROUP BY 
Department ORDER BY MaxSalary ASC;

/* 10. Create After Insert trigger on Employee table which insert records in
viewtable */

CREATE TRIGGER after_employee_insert
AFTER INSERT ON Employee
FOR EACH ROW
BEGIN
 INSERT INTO viewtable (Employee_id, First_name, Last_name,Salary,Joining_date,Department)
 VALUES (NEW.employee_id, NEW.first_name, NEW.last_name,NEW.Salary,NEW.Joining_date,NEW.Department)
END



