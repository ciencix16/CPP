#include <iostream>
using namespace std;

class Imie
{
public:
    string imie;
    Imie() {};
    Imie(string iimie) { imie = iimie; };
    virtual void zwrocDane()
    {
        cout << endl
             << "imie: " << imie;
    }
};
class Nazwisko
{
public:
    string nazwisko;
    Nazwisko() {};
    Nazwisko(string iimie) { nazwisko = iimie; };
    virtual void zwrocDane()
    {
        cout << endl
             << "nazwisko: " << nazwisko;
    }
};
class Przedmiot
{
public:
    string przedmiot;
    Przedmiot() {};
    Przedmiot(string iimie) { przedmiot = iimie; };
    virtual void zwrocDane()
    {
        cout << endl
             << "przedmiot: " << przedmiot;
    }
};
class Klasa
{
public:
    string klasa;
    Klasa() {};
    Klasa(string iimie) { klasa = iimie; };
    virtual void zwrocDane()
    {
        cout << endl
             << "klasa: " << klasa;
    }
};

class Pracownik : public Imie, public Nazwisko
{
public:
    Pracownik() {}
    Pracownik(string iimie, string inazwisko) : Imie(iimie), Nazwisko(inazwisko) {}
    void zwrocDane()
    {
        Imie::zwrocDane();
        Nazwisko::zwrocDane();
    }
};

class Nauczyciel : public Imie, public Nazwisko, public Przedmiot
{
public:
    Nauczyciel() {}
    Nauczyciel(string iimie, string inazwisko, string iprzedmiot) : Imie(iimie), Nazwisko(inazwisko), Przedmiot(iprzedmiot) {}
    void zwrocDane()
    {
        Imie::zwrocDane();
        Nazwisko::zwrocDane();
        Przedmiot::zwrocDane();
    }
};

class Wychowawca : public Imie, public Nazwisko, public Przedmiot, public Klasa
{
public:
    Wychowawca() {}
    Wychowawca(string iimie, string inazwisko, string iprzedmiot, string iklasa) : Imie(iimie), Nazwisko(inazwisko), Przedmiot(iprzedmiot), Klasa(iklasa) {}
    void zwrocDane()
    {
        Imie::zwrocDane();
        Nazwisko::zwrocDane();
        Przedmiot::zwrocDane();
        Klasa::zwrocDane();
    }
};

int main()
{
    Imie *i_imie;
    Pracownik asdf;
    i_imie = &asdf;
    asdf.nazwisko = "aaaa";
    i_imie->imie = "J**a";
    i_imie->zwrocDane();
    asdf.zwrocDane();
    return 0;
}