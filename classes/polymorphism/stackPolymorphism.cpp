#include <iostream>
using namespace std;
class Figury
{
public:
    virtual double polePowierzchni()
    {
        cout << endl
             << "wywołałeś funkcję z klasy bazowej";
        return 0;
    };
};
class Trojkat : public Figury
{
public:
    int podstawa;
    int wysokosc;
    Trojkat() {};
    Trojkat(int podstawa1, int wysokosc1)
    {
        podstawa = podstawa1;
        wysokosc = wysokosc1;
    }
    double polePowierzchni()
    {
        return podstawa * wysokosc / 2;
    }
};
class Rownoleglobok : public Figury
{
public:
    int podstawa;
    int wysokosc;
    Rownoleglobok() {};
    Rownoleglobok(int podstawa1, int wysokosc1)
    {
        podstawa = podstawa1;
        wysokosc = wysokosc1;
    }
    double polePowierzchni()
    {
        return podstawa * wysokosc;
    }
};
class Kolo : public Figury
{
public:
    int promien;
    Kolo() {};
    Kolo(int promien1)
    {
        promien = promien1;
    }
    double polePowierzchni()
    {
        return 3.14 * (promien * promien);
    }
};
int main()
{
    Figury *figura;
    Trojkat trojkat1;
    figura = &trojkat1;
    trojkat1.podstawa = 1;
    trojkat1.wysokosc = 2;
    cout << figura->polePowierzchni() << endl;
    Rownoleglobok rownoleglobok1;
    figura = &rownoleglobok1;
    rownoleglobok1.podstawa = 2;
    rownoleglobok1.wysokosc = 1;
    cout << figura->polePowierzchni() << endl;
    Kolo kolo1;
    figura = &kolo1;
    kolo1.promien = 4;
    cout << figura->polePowierzchni() << endl;
    return 0;
}