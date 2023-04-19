#include <iostream>
#include "my_math.h"


int main()
{
    setlocale(LC_ALL, "Russian");

    int a = 0;
    int b = 0;
    short int c = 0;
    std::cout << "Введите первое число:\t";
        std::cin >> a;
    std::cout << "Введите второе число:\t";
        std::cin >> b;
        std::cout << "Выберите операцию (1 - сложение, 2 вычитание, 3 - умножение, 4 - деление, 5 - возведение в степень):\t";
        std::cin >> c;
        switch (c)
        {
        case 1:
            std::cout << a << " плюс " << b << " = " << plus(a, b);
            break;
        case 2:
            std::cout << a << " минус " << b << " = " << minus(a, b);
            break;
        case 3:
            std::cout << a << " умножить на " << b << " = " << mult(a, b);
            break;
        case 4:
            std::cout << a << " разделить на " << b << " = " << dev(a, b);
            break;
        case 5:
            std::cout << a << " в степени " << b << " = " << pow(a, b);
            break;
        default:
            break;
        }

        return 0;
}
