-- Enable readable output format
.mode columns
.headers on

-- Instructions for students:
-- 1. Open SQLite in terminal: sqlite3 social.db
-- 2. Load this script: .read tasks.sql
-- 3. Exit SQLite: .exit

SELECT * FROM posts WHERE deleted = True;
SELECT * FROM users WHERE username LIKE 'a%';
SELECT username, content FROM users JOIN posts ON users.id = posts.user_id WHERE content LIKE '%small%';
SELECT username, content, posts.created_on FROM users JOIN posts ON users.id = posts.user_id WHERE deleted = 0 ORDER BY posts.created_on ASC;
SELECT username, COUNT(posts.id) FROM users JOIN posts ON users.id = posts.user_id GROUP BY posts.user_id;
SELECT username, COUNT(posts.id) FROM users JOIN posts ON users.id = posts.user_id GROUP BY posts.user_id HAVING COUNT(posts.id) > 3;
SELECT username, COUNT(followed_user_id) FROM users JOIN follows ON users.id = follows.following_user_id GROUP BY users.id;
SELECT username, COUNT(following_user_id) FROM users JOIN follows ON users.id = follows.following_user_id GROUP BY users.id;
SELECT username, COUNT(followed_user_id) FROM users JOIN follows ON users.id = follows.following_user_id GROUP BY users.id ORDER BY COUNT(followed_user_id) DESC LIMIT 5;
SELECT username AS followUser FROM users AND username AS followingUser FROM users WHERE users.id = follows.followed_user_id AND users.id = follows.followingUser;

