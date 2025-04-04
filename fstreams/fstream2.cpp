#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int zPliku, iterator = 0;
    fstream plik;
    plik.open("wyjscie1.txt", ios::in);
    while (!plik.eof())
    {
        plik >> zPliku;
        cout << zPliku << endl;
        iterator++;
    }
    int *liczby;
    liczby = new int[iterator];
    plik.close();
    plik.open("wyjscie1.txt", ios::in);
    int i = 0;
    while (!plik.eof())
    {

        plik >> zPliku;
        liczby[i] = zPliku;
        i++;
    }
    plik.close();
    for (short i = 0; i < iterator; i++)
    {
        cout << liczby[i] << ' ';
    }
    return 0;
}
