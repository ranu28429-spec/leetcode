# Write your MySQL query statement below
SELECT(
SELECT DISTINCT SALARY FROM employee
ORDER BY salary DESC
LIMIT 1,1
)AS SecondHighestSalary;