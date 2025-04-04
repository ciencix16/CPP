#include <iostream>
using namespace std;
namespace volume
{
    const float flaszka = 0.5;
    const float cola = 0.33;
    const float liter = 1;
}
int main()
{
    int a = 1;
    int b = 2;
    int c = 3;
    cout << a * volume::flaszka + b * volume::cola + c * volume::liter << endl;
    return 0;
}