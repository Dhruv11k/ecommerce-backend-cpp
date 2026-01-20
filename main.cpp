#include <iostream>
#include "Database.h"
#include "Product.h"
#include "User.h"
#include "Order.h"

// API Handlers
void createProduct(Database& db, const Product& p) {
    std::string query =
        "INSERT INTO products (name, price, stock) VALUES ('" +
        p.name + "', " + std::to_string(p.price) + ", " +
        std::to_string(p.stock) + ");";

    db.execute(query);
}

void createUser(Database& db, const User& u) {
    std::string query =
        "INSERT INTO users (name, email) VALUES ('" +
        u.name + "', '" + u.email + "');";

    db.execute(query);
}

void placeOrder(Database& db, const Order& o) {
    std::string query =
        "INSERT INTO orders (user_id, product_id, quantity) VALUES (" +
        std::to_string(o.userId) + ", " +
        std::to_string(o.productId) + ", " +
        std::to_string(o.quantity) + ");";

    db.execute(query);
}

int main() {
    Database db;
    db.connect();

    Product product{1, "Laptop", 75000, 10};
    User user{1, "Dhruv Kumar", "curiosity.dhruv@email.com"};
    Order order{1, 1, 1, 2};

    createProduct(db, product);
    createUser(db, user);
    placeOrder(db, order);

    std::cout << "E-Commerce backend operations completed.\n";
    return 0;
}
