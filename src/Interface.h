#ifndef INTERFACE_H
#define INTERFACE_H

#include "order_system.h"
#include "price_calculator.h"
using namespace std;
class Interface {
public:
    Interface(); 
    void mu();
    void run(); 

private:
    OrderSystem orderSystem;
    PriceCalculator priceCalculator;
};

#endif
