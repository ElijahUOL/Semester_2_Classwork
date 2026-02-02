-- List all students along with the names of the courses they are enrolled in.
-- Expected Columns:
-- StudentId, FirstName, LastName, CourseName
.mode columns
.headers on

SELECT Student.StudentId, Student.FirstName, Student.LastName, Course.CourseName FROM Student, Enrolment, Course WHERE Student.StudentId = Enrolment.StudentId AND Enrolment.CourseId = Course.CourseId