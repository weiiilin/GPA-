#include "order_system.h"

OrderSystem::OrderSystem() {
    // Constructor
}

void OrderSystem::add_to_order(std::string item) {
    if (order_count < 100) {
        order[order_count] = item;
        order_count++;
    } else {
        std::cout << "�q��w��! �L�k�s�W��h��~" << std::endl;
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
        std::cout << "�q�椤����즹��~!" << std::endl;
    }
}

void OrderSystem::view_order() {
    if (order_count > 0) {
        std::cout << "�z���q��:" << std::endl;
        for (int i = 0; i < order_count; i++) {
            std::cout << order[i] << std::endl;
        }
    } else {
        std::cout << "�z���q��O�Ū�!" << std::endl;
    }
}

std::string* OrderSystem::get_order() {
    return order;
}

int OrderSystem::get_order_count() {
    return order_count;
}
