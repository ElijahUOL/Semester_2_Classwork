-- Enable readable output format
.mode columns
.headers on

-- Instructions for students:
-- 1. Open SQLite in terminal: sqlite3 food_delivery.db
-- 2. Load this script: .read testing.sql
-- 3. Exit SQLite: .exit


-- You can use this to test your sql before you write it into your program.

-- Section 1
SELECT COUNT(customer_id) FROM customers;
SELECT MIN(signup_date), MAX(signup_date) FROM customers;
SELECT SUM(order_id), AVG(order_total), MIN(order_total), MAX(order_total) FROM orders;
SELECT driver_id, hire_date FROM drivers;

-- Section 2
SELECT customer_name, COUNT(order_id), SUM(order_total) FROM customers JOIN orders ON customers.customer_id = orders.customer_id GROUP BY customers.customer_id;
SELECT driver_name, COUNT(delivery_id) FROM drivers JOIN deliveries ON drivers.driver_id = deliveries.driver_id GROUP BY drivers.driver_id;
SELECT orders.order_id, customer_name, order_total, delivery_date, driver_name FROM customers JOIN orders ON customers.customer_id = orders.customer_id JOIN deliveries ON orders.order_id = deliveries.order_id JOIN drivers ON deliveries.driver_id = drivers.driver_id WHERE orders.order_id=?;