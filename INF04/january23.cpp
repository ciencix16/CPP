#include <iostream>
using namespace std;

int algorytmEuklidesa(int a, int b)
{
    while (a != b)
    {
        if (a > b)
        {
            a = a - b;
        }
        else
        {
            b = b - a;
        }
    }
    return a;
}

int main()
{
    cout << algorytmEuklidesa(20, 10);
    return 0;
}