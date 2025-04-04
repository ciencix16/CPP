#include <iostream>
using namespace std;

class Pracownik
{
public:
    string imie;
    string nazwisko;

    string zwrocDane()
    {
        return imie + " " + nazwisko;
    }
};

class Nauczyciel : public Pracownik
{
public:
    string przedmiot;
    string zwrocDane()
    {
        return imie + " " + nazwisko + ", przedmiot: " + przedmiot;
    }
};
int main()
{
    Nauczyciel nauczyciel;
    nauczyciel.imie = "Jan";
    nauczyciel.nazwisko = "Kowalski";
    nauczyciel.przedmiot = "elektronika";
    cout << "Dane nauczyciela: " << nauczyciel.zwrocDane() << endl;
    return 0;
}