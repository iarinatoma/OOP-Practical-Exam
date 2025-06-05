#ifndef MODEL_H
#define MODEL_H
#pragma once
#include <string>
using namespace std;

class InventoryItem {
private:
    int id;
    string description;
    string type;
    string location;

public:
    InventoryItem(int id, const string& desc, const string& type, const string& loc)
    : id(id), description(desc), type(type), location(loc) {}

    int getId() const { return id; }

    string getDescription() const { return description; }

    string getType() const { return type; }

    string getLocation() const { return location; }

};

#endif