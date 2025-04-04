#include <iostream>
using namespace std;
void wypisz(int tab[2][3])
{
    for (short i = 0; i < 2; i++)
    {
        for (short j = 0; j < 3; j++)
        {
            cout << tab[i][j] << " ";
        }
        cout << endl;
    }
}
void wypelnij(int tab[2][3])
{

    for (int i = 0; i < 2; i++)
    {
        srand((i + 1) * time(NULL));
        for (short j = 0; j < 3; j++)
        {
            tab[i][j] = rand() % 11;
        }
    }
}
int main()
{
    int tablica[2][3];
    int tablica1[2][3] = {1, 2, 1, 2, 3, 4};
    wypelnij(tablica);
    wypisz(tablica);
    return 0;
}