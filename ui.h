#ifndef UI_H
#define UI_H

#pragma once
#include "service.h"

class ConsoleUI {
private:
    Service& service;

public:
    ConsoleUI(Service& s);
    void run();
};


#endif //UI_H
