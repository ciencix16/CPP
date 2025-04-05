#include <iostream>
using namespace std;

template <typename T1, typename T2>

class SzablonKlasy
{
public:
    T1 liczba1;
    T2 liczba2;
    T2 dodac()
    {
        return liczba1 + liczba2;
    }
    T2 komunikat();
};

template <typename T1, typename T2>

T2 SzablonKlasy<T1, T2>::komunikat()
{
    return liczba1 + liczba2;
}
template <>
class
    SzablonKlasy<double, float>
{
public:
    double liczba1;
    float liczba2;
    int komunikat()
    {
        cout << "spec double float";
        return liczba1 + liczba2;
    }
    int dodac()
    {
        return liczba1 + liczba2;
    }
};
template <>
class
    SzablonKlasy<int, float>
{
public:
    int liczba1;
    float liczba2;
    float komunikat()
    {
        cout << "spec int float";
        return liczba1 + liczba2;
    }
    float dodac()
    {
        return liczba1 + liczba2;
    }
};
int main()
{
    SzablonKlasy<double, float> szablon1{1.0, 2.0f};
    cout << "Dodanie: " << szablon1.dodac() << endl;
    cout << "Komunikat: " << szablon1.komunikat() << endl;
    SzablonKlasy<int, float> szablon2{1, 3.0f};
    cout << "Dodanie: " << szablon2.dodac() << endl;
    cout << "Komunikat: " << szablon2.komunikat() << endl;
    SzablonKlasy<int, int> szablon3{1, 4};
    cout << "Dodanie: " << szablon3.dodac() << endl;
    cout << "Komunikat: " << szablon3.komunikat();
    return 0;
}