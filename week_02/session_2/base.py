import sqlite3
# you will need to pip install pandas matplotlib
import pandas as pd
import matplotlib as mpl

def get_connection(db_path="orders.db"):
    """
    Establish a connection to the SQLite database.
    Returns a connection object.
    """
    conn = sqlite3.connect(db_path)
    conn.row_factory = sqlite3.Row
    return conn

def main():

    db = get_connection()

    db.close()


if __name__=="__main__":
    main()

def list_product_catagories(db):
    query = "SELECT category FROM products GROUP BY category;"
    cursor = db.execute(query)
    print("--Categories--")
    for category in cursor:
        print(category[0])

def list_total_number_of_customers(db):
    query = "SELECT COUNT(customer_id) FROM customers"
    cursor = db.execute(query)
    total = cursor.fetchone()
    print(f"Total number of customers: {total[0]}")

def list_orders_for_customer(db):
    email = input("Enter your email: ")
    query = "SELECT * FROM orders JOIN customers ON orders.customer_id = customers.customer_id WHERE email = ?"
    cursor = db.execute(query, (email, ))
    print("-- Order ID -- Order Date -- Status -- Total Amount")
    for order in cursor:
        print(f"{order[0]}  {order[2]}  {order[3]}  {order[4]}")

def list_products_under_two_pounds(db):
    query = "SELECT name, price FROM products WHERE price < 2;"
    cursor = db.execute(query)
    print ("-- Product -- Price --")
    for product in cursor:
        print(f"{product[0]}   {product [1]}")

def total_per_customer(db):
    query = "SELECT first_name, last_name, SUM(total_amount) FROM customers JOIN orders ON customers.customer_id = orders.customer_id GROUP BY customers.customer_id ORDER BY SUM(total_amount) DESC LIMIT 5;"
    cursor = db.execute(query)
    print("-- Customer -- Total Spent")
    for customer in cursor:
        print(f"{customer[0]} {customer[1]}    {customer[2]}")

def orders_per_product_category(db):
    query = "SELECT category, COUNT(orders.order_id) FROM orders JOIN order_items ON orders.order_id = order_items.order_id JOIN products ON order_items.product_id = products.product_id GROUP BY products.category ORDER BY COUNT(orders.order_id) DESC;"
    cursor = db.execute(query)
    print("-- Category -- Number of orders")
    for category in  cursor:
        print(f"{category[0]}   {category[1]}")

def average_products_per_order(db):
    query = "SELECT COUNT(order_items.product_id) FROM orders JOIN order_items ON orders.order_id = order_items.order_id GROUP BY orders.order_id"
    cursor = db.execute(query)
    total_items = 0
    total_orders = 0
    for order in cursor:
        total_items += order[0]
        total_orders += 1
    average = total_items/total_orders
    print(f"Average number of products per order: {average}")

def proportion_of_orders_by_status(db):
    query = "SELECT COUNT(order_id) FROM orders;"
    cursor = db.execute(query)
    total_orders = cursor.fetchone()
    query = "SELECT COUNT(order_id) FROM orders GROUP BY status;"
    cursor = db.execute(query)
    order_proportions = []
    print(total_orders)
    for order in cursor.fetchall():
        print(order[0])
        order_proportions.append(order[0])
    for order in order_proportions:
        order = order / total_orders * 100
    print(order_proportions)

conn = get_connection()
list_product_catagories(conn)
list_total_number_of_customers(conn)
list_orders_for_customer(conn)
list_products_under_two_pounds(conn)
total_per_customer(conn)
orders_per_product_category(conn)
average_products_per_order(conn)
proportion_of_orders_by_status(conn)
