#ifndef PRICE_CALCULATOR_H
#define PRICE_CALCULATOR_H

#include <string>
#include <iostream>

class PriceCalculator {
public:
    PriceCalculator();

    int get_price(std::string item);
    int calculate_total_price(std::string* order, int order_count);

private:
    std::string menu[3] = { "º~³ù", "Á¦±ø", "¥i¼Ö" };
    int prices[3] = { 40, 50, 25 };
};

#endif
