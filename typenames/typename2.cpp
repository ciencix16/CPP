/*Napisz klas "SzablonKlasy" z dwoma polami i metod display która wywietla komunikaty:
dla specjalizacji double,float-"spec double float"
dla specjalizacji int,float-"spec int,float"
dla konkretyzacji - "konkretyzacja"*/
#include <iostream>
using namespace std;
template <typename T1, typename T2>
class Szablon
{
public:
    T1 m1;
    T2 m2;
    void display()
    {
        cout << "konkkretyzacja " << endl;
    }
};
// template <>
// class
//     Szablon<double, float>
// {
// public:
//   double m1;
//   float m2;
//   void display()
//   {
//     cout << " spec double float " << endl;
//   }
// };
template <>
void Szablon<double, float>::display() { cout << " spec double float " << endl; }; // zapis skrócony specjalizowanego szablonu double,float
// który powyżej występuje w pełnej wersji.
template <>
class
    Szablon<int, float>
{
public:
    int m1;
    float m2;
    void display()
    {
        cout << " spec int float " << endl;
    }
};
int main()
{
    Szablon<double, float> szablon{1.1, 2.9f};
    szablon.display();
    Szablon<int, float> szablon2{1, 2.123f};
    szablon2.display();
    Szablon<int, int> szablon3{21, 23};
    szablon3.display();
    return 0;
}