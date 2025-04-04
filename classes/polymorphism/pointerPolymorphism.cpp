#include <iostream>
using namespace std;
class Pracownik
{
public:
    string imie, nazwisko;
    void zwrocDane();
};
class Nauczyciel : public Pracownik
{
public:
    string przedmiot;
    void zwrocDane();
};
class Wychowawca : public Nauczyciel
{
public:
    string klasa;
    void zwrocDane();
};

void Pracownik::zwrocDane()
{
    cout << "Wywołanie metody zwrocDane() zdefiniowanej w klasie Pracownik" << endl;
    cout << "Imię: " << imie << endl;
    cout << "Nazwisko: " << nazwisko << endl;
}
void Nauczyciel::zwrocDane()
{
    cout << "Wywołanie metody zwrocDane() zdefiniowanej w klasie Nauczyciel" << endl;
    cout << "Imię: " << imie << endl;
    cout << "Nazwisko: " << nazwisko << endl;
    cout << "Przedmiot: " << przedmiot << endl;
}
void Wychowawca::zwrocDane()
{
    cout << "Wywołanie metody zwrocDane() zdefiniowanej w klasie Wychowawca"
         << endl;
    cout << "Imię: " << imie << endl;
    cout << "Nazwisko: " << nazwisko << endl;
    cout << "Przedmiot: " << przedmiot << endl;
    cout << "Klasa:" << klasa << endl;
}

int main()
{
    Pracownik *w_pracownik;
    Pracownik pracownik1;
    w_pracownik = &pracownik1;
    w_pracownik->imie = "Jan";
    w_pracownik->nazwisko = "Kowalski";
    w_pracownik->zwrocDane();
    cout << endl;
    Nauczyciel pracownik2;
    w_pracownik = &pracownik2;
    w_pracownik->imie = "Adam";
    w_pracownik->nazwisko = "Nowak";
    w_pracownik->zwrocDane();
    cout << endl;
    Wychowawca pracownik3;
    w_pracownik = &pracownik3;
    w_pracownik->imie = "Jan";
    w_pracownik->nazwisko = "Polski";
    w_pracownik->zwrocDane();
    pracownik3.zwrocDane();
    return 0;
}