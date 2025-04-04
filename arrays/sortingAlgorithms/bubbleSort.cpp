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
void bubbleSort(int tablica[], int rozmiarTablicy)
{
    for (int j = rozmiarTablicy; j != 1; j--)
    {
        for (int i = 0; i < j; i++)
        {
            if (tablica[i] > tablica[i + 1])
            {
                int temp = tablica[i];
                tablica[i] = tablica[i + 1];
                tablica[i + 1] = temp;
            }
        }
    }
}
int main()
{
    int table[25];
    wypelnijLosowo(table, 25);
    wypiszTablice(table, 25);
    cout << endl;
    bubbleSort(table, 25);
    wypiszTablice(table, 25);
    return 0;
}