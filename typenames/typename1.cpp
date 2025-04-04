#include <iostream>
using namespace std;
// Definicja szablonu klasy Prostokat:
template <typename T1, typename T2>
/* UWAGA
 * Parametr szablonu klasy Prostokat jest uogólnionym typem danych T. To jedyny parametr tego szablonu.
 */
class Prostokat
{
public:
    // Deklaracje (szablonów) zmiennych członkowskich:
    T1 bok1;
    T2 bok2;
    // Definicja (szablonu) metody pole():
    T2 pole()
    {
        return bok1 * bok2;
    }
    // Deklaracja (szablonu) metody obwod():
    T2 obwod();
};
// Definicja (szablonu) metody obwod():
template <typename T1, typename T2>
T2 Prostokat<T1, T2>::obwod()
{
    return 2 * bok1 + 2 * bok2;
}
template <>
class
    Prostokat<double, int>
{
public:
    double bok1;
    int bok2;
    int obwod()
    {
        cout << "to je z szablonu double,int";
        return 2 * bok1 + 2 * bok2;
    }
    int pole()
    {
        return bok1 * bok2;
    }
};
template <>
class
    Prostokat<int, double>
{
public:
    int bok1;
    double bok2;
    double obwod()
    {
        cout << "to je z szablonu int,double";
        return 2 * bok1 + 2 * bok2;
    }
    double pole()
    {
        return bok1 * bok2;
    }
};
int main()
{
    // Utworzenie obiektu prostokat1:
    Prostokat<double, int> prostokat1{1.1, 2};             // specjalizacja odbywa się w konstruktorze
    cout << "Pole wynosi " << prostokat1.pole() << endl;   // 2
    cout << "Obwód wynosi " << prostokat1.obwod() << endl; // 6
    Prostokat<int, double> prostokat2{1, 2.1};             // specjalizacja odbywa się w konstruktorze
    cout << "Pole wynosi " << prostokat2.pole() << endl;   // 2.1
    cout << "Obwód wynosi " << prostokat2.obwod() << endl; // 6.2
    Prostokat<int, int> prostokat3{1, 2};                  // konkretyzacja odbywa się w konstruktorze
    cout << "Pole wynosi " << prostokat3.pole() << endl;   // 2
    cout << "Obwód wynosi " << prostokat3.obwod() << endl; // 6
    return 0;                                              // niejawnie nima
}