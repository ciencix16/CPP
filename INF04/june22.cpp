#include <iostream>
using namespace std;

void wczytajLosowo(int tablica[], int rozmiarTablicy)
{
    for (int i = 0; i < rozmiarTablicy; i++)
    {
        srand(time(NULL) * (i + 1));
        tablica[i] = rand() % 101;
    }
}

void wypiszTablice(int tablica[], int rozmiarTablicy)
{
    cout << "Tablica:" << endl;
    for (int i = 0; i < rozmiarTablicy; i++)
    {
        cout << tablica[i] << ", ";
    }
    cout << endl;
}

int znajdzIndex(int tablica[], int rozmiarTablicy)
{
    int szukanaLiczba;
    cout << "Podaj szukaną liczbę: ";
    cin >> szukanaLiczba;
    for (int i = 0; i < rozmiarTablicy; i++)
    {
        if (tablica[i] == szukanaLiczba)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int liczby[50];
    wczytajLosowo(liczby, 50);
    wypiszTablice(liczby, 50);
    int index = znajdzIndex(liczby, 50);
    if (index == -1)
    {
        cout << "Liczba nie została znaleziona w tablicy." << endl;
    }
    else
    {
        cout << "Liczba znajduje się na indeksie: " << index << endl;
    }
    return 0;
}