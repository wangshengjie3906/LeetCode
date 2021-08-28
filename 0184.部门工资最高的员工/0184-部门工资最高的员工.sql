# Write your MySQL query statement below
select D.`Name` as Department, E.`name` as Employee, E.Salary as Salary
from Employee as E
join Department as D
on E.DepartmentId = D.Id
where (E.DepartmentId, E.Salary)
in (
    select E.DepartmentId, max(E.Salary)
    from Employee as E
    group by E.DepartmentId
    );
