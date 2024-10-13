#include "square.h"
#include <iostream>

using namespace std;

square::square()
{
    d = 0;
}

square::square(double a)
{
    d = a;
}
void square::SetS(double a)
{
    d = a;
}

double square::GetS() const
{
    return d;
}

void square::Input()
{
    cout << "������� ������� ��������: ";
    cin >> d;
}

void square::Output() const
{
    cout << "\n������� �������� ����� \"" << d << "\"\n";
}