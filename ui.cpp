//
// Created by iarin on 6/5/2025.
//
#include "ui.h"
#include <iostream>
using namespace std;
ConsoleUI::ConsoleUI(Service& s) : service(s) {}

void ConsoleUI::run() {
    while (true) {
        cout << "\n1. Add object\n2. Search by description\n3. List object by location\n0. Exit\n";
        cout << "Option: ";
        int opt;
        cin >> opt;
        cin.ignore();

        if (opt == 0) {
            cout << "Exiting...\n";
            break;
        }
        if (opt == 1) {
            string desc, type, loc;
            cout << "Description: ";
            getline(cin, desc);
            cout << "Type (Book, Tool, Beverage, Gadget): ";
            getline(cin, type);
            cout << "Location: ";
            getline(cin, loc);
            service.addItem(desc, type, loc);
        } else if (opt == 2) {
            string substr;
            cout << "Substring description: ";
            getline(cin, substr);
            auto results = service.searchByDescription(substr);
            for (const auto& item : results)
                cout << item.getId() << ": " << item.getDescription() << " - " << item.getType() <<" - " << item.getLocation() << "\n";
        } else if (opt == 3) {
            string loc;
            cout << "Location: ";
            getline(cin, loc);
            auto results = service.getByLocation(loc);
            for (const auto& item : results)
                cout << item.getId() << ": " << item.getDescription() << " - " << item.getType() <<" - " << item.getLocation() << "\n";
        }
        else {
            cout << "Invalid option.\n";
            break;
        }
    }
}
