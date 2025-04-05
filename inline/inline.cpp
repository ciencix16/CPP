#include <iostream>
using namespace std;

// Inline function to add two integers
inline int add(int a, int b)
{
    return a + b;
}

// Inline function to calculate the square of a number
inline int square(int x)
{
    return x * x;
}

int main()
{
    int num1 = 5, num2 = 10;

    // Calling inline functions
    int result1 = add(num1, num2);
    int result2 = square(num1);

    cout << "Addition: " << result1 << endl;
    cout << "Square: " << result2 << endl;

    return 0;
}