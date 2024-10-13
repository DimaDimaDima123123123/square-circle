#include "circle.h"
#include <iostream>
using namespace std;

circle::circle()
{
    d = 0;
}

circle::circle(double a)
{
    d = a;
}

void circle::SetD(double a)
{
    d = a;
}

double circle::GetD() const
{
    return d;
}

void circle::Input()
{
    cout << "Введите диаметр круга: ";

    cin >> d;
}

void circle::Output() const
{
    cout << "Диаметр круга равен: \"" << d << "\"\n";
}