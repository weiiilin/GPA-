#include "interface.h"
#include <iostream>

Interface::Interface() {
    // Constructor
}

void Interface::mu(){
    cout << "�w��ϥ��I�\�t�ΡI" << endl;
        cout << "1. �d�ݵ��" <<endl;
        cout << "2. �s�W�q��" << endl;
        cout << "3. �R���q��" << endl;
        cout << "4. �d�ݭq��" << endl;
        cout << "5. �d���`����" << endl;
        cout << "6. ���}�t��" << endl;
}
void Interface::run() {
    while (true) {
        

        int choice;
        cout << "�п�J�z����ܡG";
        cin >> choice;

        switch (choice) {
            case 1: {
                cout<< "�~�� 40"<< endl;
                cout<< "���� 50"<<endl;
                cout<< "�i�� 25"<<endl;
                break;
            }

            case 2: {
                string item;
                cout << "�п�J�z�Q�I����~�G";
                cin >> item;
                orderSystem.add_to_order(item);
                break;
            }
            case 3: {
                string item;
                cout << "�п�J�z�Q�R������~�G";
                cin >> item;
                orderSystem.remove_from_order(item);
                break;
            }
            case 4: {
                orderSystem.view_order();
                break;
            }
            case 5: {
                int total_price = priceCalculator.calculate_total_price(orderSystem.get_order(), orderSystem.get_order_count());
                cout << "�q���`���欰�G" << total_price << endl;
                break;
            }
            case 6: {
                cout << "�P�¨ϥΡI�A���I" << endl;
                return;
            }
            default: {
                cout << "�п�J���Ī��ﶵ�I" << std::endl;
                break;
            }
        }
    }
}
