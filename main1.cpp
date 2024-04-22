#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    float x, y;
    cout << "Введите x: ";
    cin >> x;
    cout << "Введите y: ";
    cin >> y;
    float s, s1, s2;
    s1 = 2.1 * pow(10, -3) * tan(abs(x)) + 4.4 * (x * x + pow(log(y * y), 3));
    s2 = 7 * sin(x) * cos(sqrt(y));
    s = s1 / s2;
    cout << "Значение функции равно " << s;
}