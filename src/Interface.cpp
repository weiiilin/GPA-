#include "interface.h"
#include <iostream>

Interface::Interface() {
    // Constructor
}

void Interface::mu(){
    cout << "歡迎使用點餐系統！" << endl;
        cout << "1. 查看菜單" <<endl;
        cout << "2. 新增訂單" << endl;
        cout << "3. 刪除訂單" << endl;
        cout << "4. 查看訂單" << endl;
        cout << "5. 查看總價格" << endl;
        cout << "6. 離開系統" << endl;
}
void Interface::run() {
    while (true) {
        

        int choice;
        cout << "請輸入您的選擇：";
        cin >> choice;

        switch (choice) {
            case 1: {
                cout<< "漢堡 40"<< endl;
                cout<< "薯條 50"<<endl;
                cout<< "可樂 25"<<endl;
                break;
            }

            case 2: {
                string item;
                cout << "請輸入您想點的菜品：";
                cin >> item;
                orderSystem.add_to_order(item);
                break;
            }
            case 3: {
                string item;
                cout << "請輸入您想刪除的菜品：";
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
                cout << "訂單總價格為：" << total_price << endl;
                break;
            }
            case 6: {
                cout << "感謝使用！再見！" << endl;
                return;
            }
            default: {
                cout << "請輸入有效的選項！" << std::endl;
                break;
            }
        }
    }
}
