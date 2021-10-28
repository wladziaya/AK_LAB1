#include "calculator.h"

int Calculator::Add (int a, int b)
{
    return a + b;
}

int Calculator::Sub (int a, int b)
{
    return Add (a, -b);
}

int Calculator::Mul (double a, double b)
{
    return a * b + 0.5;
}

int Calculator::Del (double a, double b)
{
    return a / b + 0.5;
}

int Calculator::Mod (int a, int b)
{
    return a % b;
}
