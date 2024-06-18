#ifndef ORDER_SYSTEM_H
#define ORDER_SYSTEM_H

#include <iostream>
#include <string>

class OrderSystem {
public:
    OrderSystem();
    void add_to_order(std::string item);
    void remove_from_order(std::string item);
    void view_order();
    std::string* get_order();
    int get_order_count();

private:
    std::string order[100];
    int order_count = 0;
};

#endif
