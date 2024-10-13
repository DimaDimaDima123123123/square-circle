#pragma once

#include <iostream>

class square
{
    int d;

public:

    square();

    square(double a);

    void SetS(double a);

    double GetS() const;

    void Input();

    void Output() const;
};