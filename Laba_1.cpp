#include <iostream>
#include <cmath>

using namespace std;
int main()
{
    setlocale(LC_ALL, "rus");
    double a, b, P, S, d;

    //Ввод длины(а) и ширины(b) прямоугольника
    cout << "Длина (а) = ";
    cin >> a;
    cout << "Ширина (b) = ";
    cin >> b;
    
    //Вычисление P, S, d
    P = (a + b) * 2;
    S = a * b;
    d = sqrt(a * a + b * b);

    //Вывод P, S, d
    cout << "P = " << P << endl;
    cout << "S = " << S << endl;
    cout << "d = " << d << endl;

    return 0;
}

