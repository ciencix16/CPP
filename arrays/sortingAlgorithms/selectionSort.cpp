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
void selectionSort(int tablica[], int rozmiarTablicy)
{
    for (int i = 0; i < rozmiarTablicy - 1; i++)
    {
        int minIndex = i;

        for (int j = i + 1; j < rozmiarTablicy; j++)
        {
            if (tablica[j] < tablica[minIndex])
            {
                minIndex = j;
            }
        }
        if (minIndex != i)
        {
            int temp = tablica[i];
            tablica[i] = tablica[minIndex];
            tablica[minIndex] = temp;
        }
    }
}
int main()
{
    int table[25];
    wypelnijLosowo(table, 25);
    wypiszTablice(table, 25);
    cout << endl;
    selectionSort(table, 25);
    wypiszTablice(table, 25);
    return 0;
}