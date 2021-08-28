# Write your MySQL query statement below
SELECT p.FirstName, LastName, a.City, a.state
FROM Person p
LEFT OUTER JOIN Address a
ON p.PersonId = a.PersonId