#ifndef price_calculator_H
#define price_calculator_H
#include <string>
#include <iostream>
using namespace std ;

class PriceCalculator{
public:
    PriceCalculator();

    int getPrice(string);
    int totalPrice(string*,int);
private:
    string menu[3]={"�~��","����","�i��"};
    int prices[3]={40,50,25};
};
#endif