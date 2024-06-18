#include "order_system.h"

OrderSystem::OrderSystem() {
    // Constructor
}

void OrderSystem::add_to_order(std::string item) {
    if (order_count < 100) {
        order[order_count] = item;
        order_count++;
    } else {
        std::cout << "訂單已滿! 無法新增更多菜品" << std::endl;
    }
}

void OrderSystem::remove_from_order(std::string item) {
    bool found = false;
    for (int i = 0; i < order_count; i++) {
        if (order[i] == item) {
            for (int j = i; j < order_count - 1; j++) {
                order[j] = order[j + 1];
            }
            order_count--;
            found = true;
            break;
        }
    }
    if (!found) {
        std::cout << "訂單中未找到此菜品!" << std::endl;
    }
}

void OrderSystem::view_order() {
    if (order_count > 0) {
        std::cout << "您的訂單:" << std::endl;
        for (int i = 0; i < order_count; i++) {
            std::cout << order[i] << std::endl;
        }
    } else {
        std::cout << "您的訂單是空的!" << std::endl;
    }
}

std::string* OrderSystem::get_order() {
    return order;
}

int OrderSystem::get_order_count() {
    return order_count;
}
