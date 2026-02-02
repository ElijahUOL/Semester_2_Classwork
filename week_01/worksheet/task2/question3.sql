-- For each department, calculate the number of enrolments in its courses.
-- Expected Columns:
-- DepartmentName, TotalEnrolments
.mode columns
.headers on

SELECT Department.DepartmentName AS DepartmentName, COUNT(Enrolment.EnrolmentId) AS TotalEnrolments FROM Enrolment, Course, Department WHERE Department.DepartmentId = Course.DepartmentId AND Enrolment.CourseId = Course.CourseId GROUP BY Course.DepartmentId  ;