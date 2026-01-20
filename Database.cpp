#include "Database.h"
#include <iostream>

bool Database::connect() {
    std::cout << "Database connected successfully.\n";
    return true;
}

void Database::execute(const std::string& query) {
    std::cout << "Executing SQL: " << query << std::endl;
}
