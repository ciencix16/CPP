#include <iostream>
#include <string>
using namespace std;

class Prostokat
{
public:
    int bok1;
    int bok2;

    // Konstruktor bezparametrowy
    Prostokat() : bok1{0}, bok2{0}
    {
        cout << "Wywolano konstruktor bezparametrowy" << endl;
    }

    // Konstruktor parametrowy
    Prostokat(int b1, int b2) : bok1{b1}, bok2{b2}
    {
        cout << "Wywolano konstruktor parametrowy" << endl;
    }

    // Konstruktor kopiujący
    Prostokat(const Prostokat &wzorzec)
    {
        bok1 = wzorzec.bok1;
        bok2 = wzorzec.bok2;
        cout << "Wywolano konstruktor kopiujacy" << endl;
    }

    void wyswietl()
    {
        cout << "bok1: " << bok1 << ", bok2: " << bok2 << endl;
    }
};

int main()
{
    // Konstruktor bezparametrowy
    Prostokat p0;
    p0.wyswietl();

    // Konstruktor parametrowy
    Prostokat p1(5, 10);
    p1.wyswietl();

    // Konstruktor kopiujący
    Prostokat p2 = p1;
    p2.wyswietl();

    return 0;
}
