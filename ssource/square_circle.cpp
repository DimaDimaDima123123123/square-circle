#include "square_circle.h"
#include <iostream>
using namespace std;

square_circle::square_circle() : square(), circle()
{}

square_circle::square_circle(double a, double b) : square(a), circle(b) 
{}

bool square_circle::CanFitIn() const
{
    return GetD() <= GetS();

}

void square_circle::Input()
{
    square::Input();
    circle::Input();
}

void square_circle::Output() const
{
    square::Output();
    circle::Output();

    if (CanFitIn())
    {
        cout << "\nКруг способен поместиться в пределах квардата!\n";
    }
    else
    {
        cout << "\nКруг не способен поместиться в пределах квардата!\n";
    }
}