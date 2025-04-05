// Pobieramy liczbę. Jeżeli jest dwucyfrowa to wypisz jom. Obsłuż na trzy sposoby błędy:
// liczba jednocyfrowa
// liczba trzycyfrowa
// liczba cztero i więcej cyfrowa

#include <iostream>
#include <stdexcept>
using namespace std;

class my_exception : public exception
{
public:
    const char *what() const noexcept override
    {
        return "Podales liczbe trzycyfrową lub więcej\n";
    }
};

class MyLogicError : public logic_error
{
public:
    MyLogicError(const string &msg) : logic_error(msg) {}
};

int main()
{
    try // catche łapią po typie wyrzucanej zmiennej
    {
        double a = 0;
        cout << "podaj liczbe : ";
        cin >> a;
        if ((a - (int)a) != 0)
            throw logic_error("Liczba niecałkowita");
        if (a < 0)
            throw MyLogicError("Liczba niedodatnia");
        if (a >= 100)
            throw my_exception();
        if (a < 10)
            throw (int)a;
        cout << "twoja liczba to : " << a;
    }
    catch (int)
    {
        cout << "Podales liczbe jednocyfrowa" << endl;
    }
    catch (const logic_error &e)
    {
        cout << e.what() << endl;
    }
    catch (const exception &e)
    {
        cout << e.what() << endl;
    }

    return 0;
}