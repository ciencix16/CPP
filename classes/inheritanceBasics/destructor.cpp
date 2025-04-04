#include <iostream>
using namespace std;

class Pracownik
{
public:
    string imie, nazwisko;
    Pracownik(string pImie = "", string pNazwisko = "") : imie(pImie), nazwisko(pNazwisko)
    {
        cout << "Konstruktor Pracownik" << endl;
    }
    ~Pracownik() { cout << "Destruktor Pracownik" << endl; }
    string zwrocDane() { return imie + " " + nazwisko; }
};

class Nauczyciel : public Pracownik
{
public:
    string przedmiot;
    Nauczyciel(string pImie = "", string pNazwisko = "", string pPrzedmiot = "")
        : Pracownik(pImie, pNazwisko), przedmiot(pPrzedmiot)
    {
        cout << "Konstruktor Nauczyciel" << endl;
    }
    ~Nauczyciel() { cout << "Destruktor Nauczyciel" << endl; }
    string zwrocDane() { return imie + " " + nazwisko + ", przedmiot: " + przedmiot; }
};

int main()
{
    Nauczyciel n1("Jan", "Kowalski", "Matematyka");
    cout << "Dane nauczyciela: " << n1.zwrocDane() << endl;
    return 0;
}
