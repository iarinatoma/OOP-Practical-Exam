#include "repository.h"
#include <vector>

void Repository::addItem(const string& desc, const string& type, const string& loc) {
    items.emplace_back(nextId++, desc, type, loc);
}

const vector<InventoryItem>& Repository::getAll() const {
    return items;
}