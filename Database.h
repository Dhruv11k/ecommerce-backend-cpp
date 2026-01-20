#ifndef DATABASE_H
#define DATABASE_H

#include <string>
#include <vector>

class Database {
public:
    bool connect();
    void execute(const std::string& query);
};

#endif
