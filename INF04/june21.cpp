#include <iostream>
using namespace std;

class Sortowanie
{
public:
    int elementMaksymalny(int tablica[], int rozmiarTablicy, int start)
    {
        int maxIndex = start;
        for (int i = start + 1; i < rozmiarTablicy; i++)
        {
            if (tablica[i] > tablica[maxIndex])
            {
                maxIndex = i;
            }
        }
        return maxIndex;
    }

    void wczytajTablice(int tablica[], int rozmiarTablicy)
    {
        cout << "Wpisz 10 liczb calkowitych do posortowania:" << endl;
        for (int i = 0; i < rozmiarTablicy; i++)
        {
            cout << "Liczba " << (i + 1) << ": ";
            cin >> tablica[i];
        }
    }

    void selectionSort(int tablica[], int rozmiarTablicy)
    {
        for (int i = 0; i < rozmiarTablicy - 1; i++)
        {
            int maxIndex = elementMaksymalny(tablica, rozmiarTablicy, i);
            int temp = tablica[i];
            tablica[i] = tablica[maxIndex];
            tablica[maxIndex] = temp;
        }
    }

    void wypiszTablice(int tablica[], int rozmiarTablicy)
    {
        cout << "Posortowana tablica:" << endl;
        for (int i = 0; i < rozmiarTablicy; i++)
        {
            cout << tablica[i] << ", ";
        }
        cout << endl;
    }

    void wypiszElementMaksymalny(int tablica[], int rozmiarTablicy)
    {
        cout << "Element maksymalny: " << tablica[0];
    }
};

int main()
{
    int liczby[10];
    Sortowanie sortowanie;
    sortowanie.wczytajTablice(liczby, 10);
    sortowanie.selectionSort(liczby, 10);
    sortowanie.wypiszTablice(liczby, 10);
    sortowanie.wypiszElementMaksymalny(liczby, 10);
    return 0;
}