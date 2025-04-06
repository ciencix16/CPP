#include <iostream>
using namespace std;

char plec(string PESEL)
{
    if ((PESEL[9] - '0') % 2 == 0)
    {
        return 'K';
    }
    else
    {
        return 'M';
    }
}

bool sumaKontrolna(string PESEL)
{
    if (PESEL.length() != 11)
    {
        cout << "Niepoprawna dlugosc PESEL!" << endl;
        return false;
    }

    int waga[] = {1, 3, 7, 9, 1, 3, 7, 9, 1, 3};
    int S = 0;

    for (int i = 0; i < 10; i++)
    {
        S += (PESEL[i] - '0') * waga[i];
    }

    int R = (10 - (S % 10)) % 10;

    return (R == (PESEL[10] - '0'));
}

void dataUrodzenia(string PESEL)
{
    int rok = (PESEL[0] - '0') * 10 + (PESEL[1] - '0');
    int miesiac = (PESEL[2] - '0') * 10 + (PESEL[3] - '0');

    if (rok > 80 && miesiac <= 92)
    {
        rok += 1800;
        miesiac -= 80;
    }
    else if (miesiac > 0 && miesiac <= 12)
    {
        rok += 1900;
    }
    else if (miesiac > 20 && miesiac <= 32)
    {
        rok += 2000;
        miesiac -= 20;
    }
    else if (miesiac > 40 && miesiac <= 52)
    {
        rok += 2100;
        miesiac -= 40;
    }
    else if (miesiac > 60 && miesiac <= 72)
    {
        rok += 2200;
        miesiac -= 60;
    }
    else
    {
        cout << "Niepoprawny miesiac w PESEL!" << endl;
        return;
    }

    int day = (PESEL[4] - '0') * 10 + (PESEL[5] - '0');

    cout << "Data urodzenia: " << day << "-" << miesiac << "-" << rok << endl;
}

int main()
{
    string PESEL;
    cout << "Podaj swoj PESEL: ";
    cin >> PESEL;

    if (PESEL.length() != 11)
    {
        cout << "PESEL musi miec 11 cyfr!" << endl;
        return 1;
    }

    cout << "Płeć: " << (plec(PESEL) == 'K' ? "Kobieta" : "Mężczyzna") << endl;

    if (sumaKontrolna(PESEL))
    {
        cout << "PESEL jest poprawny zgodnie z sumą kontrolną." << endl;
    }
    else
    {
        cout << "PESEL jest błędny!" << endl;
    }

    dataUrodzenia(PESEL);

    return 0;
}