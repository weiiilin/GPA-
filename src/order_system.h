#ifndef ORDER_SYSTEM_H
#define ORDER_SYSTEM_H
#include <iostream>
#include <string>
using namespace std;

class OrderSystem{
public:
    OrderSystem();
    void add_to_order(string);
    void remove_from_order(string);
    void view_order();
    string* get_order();
    int get_order_count();//取得訂單數量
private:
    string order[100];
    int order_count=0;
};

#endif