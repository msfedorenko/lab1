#include <iostream>
#include <clocale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Ukrainian");

    // 1. Оголошення змінних
    float A, B, C, temp;

    // 2. Введення початкових значень
    cout << "Введіть значення A: ";
    cin >> A;
    cout << "Введіть значення B: ";
    cin >> B;
    cout << "Введіть значення C: ";
    cin >> C;

    cout << "\nПочаткові значення: A = " << A << ", B = " << B << ", C = " << C << endl;

    // 3–6. Алгоритм зсуву
    temp = A;  // Крок 3: зберігаємо початкове A
    A = B;     // Крок 4: B -> A
    B = C;     // Крок 5: C -> B
    C = temp;  // Крок 6: початкове A (з temp) -> C

    // 7. Виведення нових значень
    cout << "\nНові значення:" << endl;
    cout << "A = " << A << endl;
    cout << "B = " << B << endl;
    cout << "C = " << C << endl;

    // 8. Затримка екрана
    cout << "\nНатисніть Enter, щоб завершити програму...";
    cin.ignore(); // Очищення буфера
    cin.get();    // Очікування натискання клавіші

    return 0;
}