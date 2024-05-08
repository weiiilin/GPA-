#include "order_system.h"

OrderSystem::OrderSystem(){

}

void OrderSystem::add_to_order(string item){
    if (order_count < 100) { //�ˬd�q��
        order[order_count] = item;
        order_count++;
    } else {
        cout << "�z���q��w��!�L�k�s�W��h����" << endl;
        cout << "�A�n" << endl;
    }
}


void OrderSystem::remove_from_order(string item){
    bool found = false;
    for (int i = 0; i < order_count; i++) {
        if (order[i] == item) {
            // �N��쪺���ث᭱�����ة��e����
            for (int j = i; j < order_count - 1; j++) {
                order[j] = order[j + 1];
            }
            order_count--;
            found = true;
            break;
        }
    }
    if (!found) {
        cout << "�q�椤�S��������!" << endl;
    }
}

void OrderSystem::view_order(){
if (order_count > 0) {
        cout << "�z���q��:" << endl;
        for (int i = 0; i < order_count; i++) {
            cout << order[i] <<endl;
        }
    } else {
        cout << "�z���q�欰��!" << endl;
    }
}

string* OrderSystem::get_order(){
    return order;
}

int OrderSystem::get_order_count(){
    return order_count;
}
