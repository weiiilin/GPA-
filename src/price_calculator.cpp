#include "price_calculator.h"

PriceCalculator::PriceCalculator() {
    // Constructor
}

int PriceCalculator::get_price(std::string item) {
    for (int i = 0; i < 3; ++i) {
        if (menu[i] == item) {
            return prices[i];
        }
    }
    return 0;
}

int PriceCalculator::calculate_total_price(std::string* order, int order_count) {
    int total = 0;
    for (int i = 0; i < order_count; ++i) {
        total += get_price(order[i]);
    }
    return total;
}
