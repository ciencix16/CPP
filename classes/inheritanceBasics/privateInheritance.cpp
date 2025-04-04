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

class Nauczyciel : private Pracownik
{
private:
    string przedmiot;

public:
    void setPrzedmiot(string pPrzedmiot)
    {
        przedmiot = pPrzedmiot;
    }
    string getPrzedmiot()
    {
        return przedmiot;
    }
    string zwrocDane()
    {
        return getImie() + " " + getNazwisko() + ", przedmiot: " + przedmiot;
    }
    void setImie(string pImie)
    {
        imie = pImie;
    }
    void setNazwisko(string pNazwisko)
    {
        nazwisko = pNazwisko;
    }
    string getImie()
    {
        return imie;
    }
    string getNazwisko()
    {
        return nazwisko;
    }
};

int main()
{
    Nauczyciel nauczyciel;
    nauczyciel.setImie("Jan");
    nauczyciel.setNazwisko("Kowalski");
    nauczyciel.setPrzedmiot("elektronika");
    cout << "Dane nauczyciela: " << nauczyciel.zwrocDane() << endl;
    return 0;
}