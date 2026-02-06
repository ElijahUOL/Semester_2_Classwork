-- Enable readable output format
.mode columns
.headers on

-- Instructions for students:
-- 1. Open SQLite in terminal: sqlite3 library.db
-- 2. Load this script: .read code.sql
-- 3. Exit SQLite: .exit


-- write your sql code here
SELECT title, name, Loans.loan_date FROM Books LEFT JOIN Loans ON Loans.book_id = Books.id LEFT JOIN Members ON Loans.member_id = Members.id;
SELECT title, Loans.id AS LoanId FROM Books LEFT JOIN Loans ON Books.id = Loans.book_id;
SELECT LibraryBranch.name, title FROM LibraryBranch LEFT JOIN Books ON LibraryBranch.id = Books.branch_id;
SELECT LibraryBranch.name, Count(title) FROM LibraryBranch LEFT JOIN Books ON LibraryBranch.id = Books.branch_id GROUP BY LibraryBranch.id;
SELECT LibraryBranch.name, Count(title) FROM LibraryBranch LEFT JOIN Books ON LibraryBranch.id = Books.branch_id GROUP BY LibraryBranch.id HAVING COUNT(title) > 7;
SELECT Members.name, COUNT(Loans.id) FROM Members LEFT JOIN Loans ON Members.id = Loans.member_id GROUP BY Members.id;
SELECT Members.name, COUNT(Loans.id) FROM Members LEFT JOIN Loans ON Members.id = Loans.member_id GROUP BY Members.id HAVING COUNT(Loans.id) = 0;
SELECT LibraryBranch.name, COUNT(Loans.id) FROM LibraryBranch LEFT JOIN Books ON LibraryBranch.id = Books.branch_id LEFT JOIN Loans ON Books.id = Loans.book_id GROUP BY LibraryBranch.id;
SELECT Members.name, COUNT(Loans.id) FROM Members LEFT JOIN Loans ON Members.id = Loans.member_id GROUP BY Members.id HAVING COUNT(Loans.id) > 0;
