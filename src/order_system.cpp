#include "order_system.h"

OrderSystem::OrderSystem(){

}

void OrderSystem::add_to_order(string item){
    if (order_count < 100) { //檢查訂單
        order[order_count] = item;
        order_count++;
    } else {
        cout << "您的訂單已滿!無法新增更多項目" << endl;
        cout << "你好" << endl;
    }
}


void OrderSystem::remove_from_order(string item){
    bool found = false;
    for (int i = 0; i < order_count; i++) {
        if (order[i] == item) {
            // 將找到的項目後面的項目往前移動
            for (int j = i; j < order_count - 1; j++) {
                order[j] = order[j + 1];
            }
            order_count--;
            found = true;
            break;
        }
    }
    if (!found) {
        cout << "訂單中沒有此項目!" << endl;
    }
}

void OrderSystem::view_order(){
if (order_count > 0) {
        cout << "您的訂單:" << endl;
        for (int i = 0; i < order_count; i++) {
            cout << order[i] <<endl;
        }
    } else {
        cout << "您的訂單為空!" << endl;
    }
}

string* OrderSystem::get_order(){
    return order;
}

int OrderSystem::get_order_count(){
    return order_count;
}
