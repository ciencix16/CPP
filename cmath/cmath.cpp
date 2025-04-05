#include <iostream>
#include <cmath> // Required for math functions

int main()
{
    double num = -9.5, base = 2, exponent = 3;

    // Absolute value
    std::cout << "abs(" << num << ") = " << abs(num) << " (Absolute value)" << std::endl;

    // Square root
    std::cout << "sqrt(25) = " << sqrt(25) << " (Square root)" << std::endl;

    // Power function
    std::cout << "pow(" << base << ", " << exponent << ") = " << pow(base, exponent) << " (Base raised to exponent)" << std::endl;

    // Natural logarithm (ln)
    std::cout << "log(2.71828) = " << log(2.71828) << " (Natural logarithm)" << std::endl;

    // Exponential function (e^x)
    std::cout << "exp(1) = " << exp(1) << " (e raised to the power of 1)" << std::endl;

    // Logarithm base 10
    std::cout << "log10(100) = " << log10(100) << " (Logarithm base 10)" << std::endl;

    // Trigonometric functions (in radians)
    std::cout << "sin(3.14159/2) = " << sin(3.14159 / 2) << " (Sine of pi/2)" << std::endl;
    std::cout << "cos(0) = " << cos(0) << " (Cosine of 0)" << std::endl;
    std::cout << "tan(3.14159/4) = " << tan(3.14159 / 4) << " (Tangent of pi/4)" << std::endl;

    // Rounding functions
    std::cout << "ceil(" << num << ") = " << ceil(num) << " (Rounds up)" << std::endl;
    std::cout << "floor(" << num << ") = " << floor(num) << " (Rounds down)" << std::endl;
    std::cout << "trunc(" << num << ") = " << trunc(num) << " (Truncates decimal part)" << std::endl;
    std::cout << "round(" << num << ") = " << round(num) << " (Rounds to nearest integer)" << std::endl;

    return 0;
}