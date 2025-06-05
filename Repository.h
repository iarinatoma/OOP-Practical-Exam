#ifndef REPOSITORY_H
#define REPOSITORY_H
#pragma once
#include "model.h"
#include <vector>
using namespace std;

class Repository {
private:
    std::vector<InventoryItem> items;
    int nextId = 0;
public:
    void addItem(const string& desc, const string& type, const string& loc);
    const vector<InventoryItem>& getAll() const;

};

#endif //REPOSITORY_H
