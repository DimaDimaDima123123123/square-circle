#pragma once

#include "square.h"
#include "circle.h"

class square_circle : public square, public circle
{
public:
    square_circle();

    square_circle(double a, double b);

    bool CanFitIn() const;

    void Input();

    void Output() const;
};