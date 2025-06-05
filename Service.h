#ifndef SERVICE_H
#define SERVICE_H

#pragma once
#include "repository.h"
using namespace std;

class Service {
private:
    Repository& repo;
public:
    Service(Repository& r);
    void addItem(const string& desc, const string& type, const string& loc);
    vector<InventoryItem> searchByDescription(const string& substr) const;
    vector<InventoryItem> getByLocation(const string& loc) const;
};

#endif //SERVICE_H
