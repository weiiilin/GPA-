#include "price_calculator.h"
#include "order_system.h"

int main() {
    OrderSystem orderSystem;
    PriceCalculator priceCalculator;

    // 添加一些範例菜單
    orderSystem.add_to_order("漢堡");
    orderSystem.add_to_order("薯條");
    orderSystem.add_to_order("飲料");

    // 查看訂單
    orderSystem.view_order();

    // 删除一個訂單
    orderSystem.remove_from_order("薯條");

    // 再次查看菜單
    orderSystem.view_order();

    // 計算訂單總價格
    int total_price = priceCalculator.totalPrice(orderSystem.get_order(), orderSystem.get_order_count());
    cout << "訂單總價格為:" << total_price << endl;

    return 0;
}