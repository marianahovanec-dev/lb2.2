#include <iostream>
#include <windows.h>
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int number;
    cout << "Введіть номер тролейбуса: ";
    cin >> number;

    if (cin.fail() || number <= 0) {
        cout << "Помилка! Номер тролейбуса має бути додатнім числом." << endl;
        return 1;
    }

    if (number == 1)
        cout << "Маршрут №1: Вокзал — Центр — Мікрорайон Сонячний." << endl;
    else if (number == 2)
        cout << "Маршрут №2: Завод — Центральний ринок — Вокзал." << endl;
    else if (number == 3)
        cout << "Маршрут №3: Університет — Площа Незалежності — Лісопарк." << endl;
    else if (number == 4)
        cout << "Маршрут №4: Аеропорт — Центр — Автостанція." << endl;
    else
        cout << "Маршруту з таким номером не існує." << endl;

    return 0;
}