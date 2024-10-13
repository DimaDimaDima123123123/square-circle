#pragma once

#include <iostream>

class circle
{
    int d;

public:
    circle();

    circle(double a);

    void SetD(double a);

    double GetD() const;

    void Input();

    void Output() const;
};