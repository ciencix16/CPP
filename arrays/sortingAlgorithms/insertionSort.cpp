#include <iostream>
#include <cstdlib>
using namespace std;
void wypelnijLosowo(int tablica[], int rozmiarTablicy)
{
    for (int i = 0; i < rozmiarTablicy; i++)
    {
        srand(time(NULL) * (i + 1));
        tablica[i] = rand() % 10;
    }
}
void wypiszTablice(int tablica[], int rozmiarTablicy)
{
    for (int i = 0; i < rozmiarTablicy; i++)
    {
        cout << tablica[i] << ", ";
    }
}
void insertionSort(int tablica[], int rozmiarTablicy)
{
    for (int i = 1; i < rozmiarTablicy; i++)
    {
        int temp = tablica[i];
        int j = i - 1;
        while (j >= 0 && tablica[j] > temp)
        {
            tablica[j + 1] = tablica[j];
            j--;
        }
        tablica[j + 1] = temp;
    }
}

int main()
{
    int table[25];
    wypelnijLosowo(table, 25);
    wypiszTablice(table, 25);
    cout << endl;
    insertionSort(table, 25);
    wypiszTablice(table, 25);
    return 0;
}