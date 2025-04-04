#include <iostream>
using namespace std;

class Samochod
{
    string marka;

protected:
    string model;

public:
    int rokProdukcji;

    Samochod()
    {
        marka = "fiat";
        model = "punto";
        rokProdukcji = 2003;
    }

    Samochod(string markaInput, string modelInput, int inputRokProdukcji)
    {
        marka = markaInput;
        model = modelInput;
        rokProdukcji = inputRokProdukcji;
    }

    void setMarka(string input)
    {
        marka = input;
    }

    string getMarka()
    {
        return marka;
    }

    void setModel(string input)
    {
        model = input;
    }

    string getModel()
    {
        return model;
    }
};
class Ciezarowka : public Samochod
{
public:
    string przeznaczenie;
    Ciezarowka() : Samochod()
    {
        przeznaczenie = "Chłodnia";
    }
    Ciezarowka(string markaInput, string modelInput, int inputRokProdukcji, string inputPrzeznaczenie) : Samochod(markaInput, modelInput, inputRokProdukcji)
    {
        przeznaczenie = inputPrzeznaczenie;
    }
    void display()
    {
        cout << getMarka() << endl;
        cout << model << endl;
        cout << rokProdukcji << endl;
        cout << przeznaczenie << endl;
    };
};

class Autobus : public Samochod
{
public:
    int liczbaMiejscStojacych, liczbaMiejscSiedzacych;
    Autobus() : Samochod()
    {
        liczbaMiejscSiedzacych = 24;
        liczbaMiejscStojacych = 48;
    }
    Autobus(string markaInput, string modelInput, int inputRokProdukcji, int inputLiczbaMiejscStojacych, int inputLiczbaMiejscSiedzacych) : Samochod(markaInput, modelInput, inputRokProdukcji)
    {
        liczbaMiejscSiedzacych = inputLiczbaMiejscSiedzacych;
        liczbaMiejscStojacych = inputLiczbaMiejscStojacych;
    }

    void display()
    {
        cout << getMarka() << endl;
        cout << model << endl;
        cout << rokProdukcji << endl;
        cout << liczbaMiejscSiedzacych << endl;
        cout << liczbaMiejscStojacych << endl;
    };
};
int main()
{
    int rok, liczbaMiejscDoSiedzenia, liczbaMiejscDoStania;
    string marka, model;
    cout << "Podaj rok produkcji" << endl;
    cin >> rok;
    cout << "Podaj liczbe miejsc do siedzenia" << endl;
    cin >> liczbaMiejscDoSiedzenia;
    cout << "Podaj liczbe miejsc do stania" << endl;
    cin >> liczbaMiejscDoStania;
    cout << "Podaj marke" << endl;
    cin >> marka;
    cout << "Podaj model" << endl;
    cin >> model;
    Autobus autobus1(marka, model, rok, liczbaMiejscDoSiedzenia, liczbaMiejscDoStania);
    return 0;
}