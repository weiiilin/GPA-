#include "price_calculator.h"

PriceCalculator::PriceCalculator(){

}
int PriceCalculator::getPrice(string item){
    for(int i=0;i<3;i++){
        if(item ==menu[i]){
            return prices[i];
        }
    }
    return 0;
}

int PriceCalculator::totalPrice(string order[],int order_count){
    int total_price=0;
    for(int i=0;i<order_count;i++){
        total_price+=getPrice(order[i]);
    }
    return total_price;
}
