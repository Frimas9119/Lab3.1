/// Lab_03_1.cpp
// < Тимчук Остап >
// Лабораторна робота No 3.1
// Розгалуження, задане формулою: функція однієї змінної.
// Варіант 8

#include <iostream>
using namespace std;

int main()
{
    double x;
    double y;
    double z;
    cout << "x="; cin >> x;
    double v = 2 + 6 * x;
    // спосіб 1: розгалуження в скороченій формі
    if (x <= 0) {
        z = log(cos(x) + pow(x, 5));
    }
    if (x >3) {
        z = 12*x-pow(x,8);
    }
    if (x <= 3 && x>0) {
        z = 1/tan((1+log(x))/3);
    }
    y = v + z;
    cout << "1)y="; cout << y << endl;
    // спосіб 2: розгалуження в повній формі
    if (x <= 0)
        z = log(cos(x) + pow(x, 5));
    else
        if (x > 3)
            z = 12 * x - pow(x, 8);
        else
            z = 1 / tan((1 + log(x)) / 3);
    y = v + z;
    cout << "2) y = " << y << endl;
    cin.get();
    return 0;
}