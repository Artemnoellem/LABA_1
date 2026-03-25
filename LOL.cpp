#include <iostream>
#include <cmath>

using namespace std; 

int main() {
    double a, b;
    
    cout << "Введите сторону А: ";
    cin >> a;
    cout << "Введите сторону B: ";
    cin >> b;

    //Проверка

    if (a <= 0 || b <= 0) {
        cout << " ОШИБКА! СТОРОНА НЕ МОЖЕТ РАВНЯТЬСЯ НУЛЮ ";
        return 1;
    }

    //Считаем параметры

    double per = 2 * (a + b);
    double area = a* b;
    double dio = sqrt(a * a + b * b);

    //Вывод
    //12345

    cout << "Результат" << endl;
    cout << "Периметр: " << per << endl;
    cout << "Площадь:  " << area << endl;
    cout << "Диалональ:  " << dio << endl;

    return 0;
    
}