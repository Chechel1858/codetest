#include <iostream>
#include <string>

using namespace std;

// Модуль обработки промокода
void applyPromoCode(string promo, double &deliveryCost) {
    if (promo == "PIZZAFREE") {
        deliveryCost = 0;
    }
}

int main()
{
    int pizzaCount;
    double pizzaPrice;
    double deliveryCost;
    double discountPercent;
    string promoCode;

    cout << "=== Пиццерия (Маргарита) ===" << endl;

    cout << "Введите количество пицц: ";
    cin >> pizzaCount;

    cout << "Введите цену одной пиццы: ";
    cin >> pizzaPrice;

    cout << "Введите стоимость доставки: ";
    cin >> deliveryCost;

    cout << "Введите скидку (%): ";
    cin >> discountPercent;

    cout << "Введите промокод (или '-' если нет): ";
    cin >> promoCode;

    // Вызов модуля проверки промокода
    applyPromoCode(promoCode, deliveryCost);

    // Расчёты по твоей формуле
    double total = pizzaCount * pizzaPrice;
    double discount = total * discountPercent / 100;
    double finalPrice = total - discount + deliveryCost;

    cout << endl;
    cout << "Количество пицц: " << pizzaCount << endl;
    cout << "Цена за штуку: " << pizzaPrice << endl;
    cout << "Стоимость пицц: " << total << endl;
    cout << "Скидка: " << discount << endl;
    cout << "Доставка: " << deliveryCost << endl;
    cout << "К оплате: " << finalPrice << endl;

    return 0;
}
