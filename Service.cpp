#include "service.h"
#include <algorithm>
#include <cctype>
using namespace std;

Service::Service(Repository& r) : repo(r) {}

void Service::addItem(const string& desc, const string& type, const string& loc) {
    repo.addItem(desc, type, loc);
}

string toLowercase(const string& str) {
    string lowered = str;
    transform(lowered.begin(), lowered.end(), lowered.begin(), ::tolower);
    return lowered;
}

vector<InventoryItem> Service::searchByDescription(const string& substr) const {
    vector<InventoryItem> result;
    string loweredSubstr = toLowercase(substr);

    for (const auto& item : repo.getAll()) {
        string loweredDesc = toLowercase(item.getDescription());

        // daca gaseste returneaza pozitia daca nu npos. l am mai folosit la apotheke(lab4)
        if (loweredDesc.find(loweredSubstr) != string::npos) {
            result.push_back(item);
        }
    }
    return result;
}

vector<InventoryItem> Service::getByLocation(const string& loc) const {
    vector<InventoryItem> result;
    for (const auto& item : repo.getAll()) {
        if (item.getLocation() == loc) {
            result.push_back(item);
        }
    }
    return result;
}
