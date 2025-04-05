#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int zPliku;
    int iterator = 0;

    // First read to count the numbers
    ifstream plik("wyjscie2.txt");
    if (!plik.is_open())
    {
        cerr << "Nie mozna otworzyc pliku!" << endl;
        return 1;
    }

    while (plik >> zPliku)
    {
        iterator++;
    }
    plik.close();

    // Allocate memory
    int *liczby = new int[iterator];

    // Reopen the file for second read
    plik.open("wyjscie2.txt");
    if (!plik.is_open())
    {
        cerr << "Nie mozna otworzyc pliku ponownie!" << endl;
        delete[] liczby;
        return 1;
    }

    int i = 0;
    while (plik >> zPliku)
    {
        liczby[i++] = zPliku;
    }
    plik.close();

    // Display the numbers
    for (int j = 0; j < iterator; j++)
    {
        cout << liczby[j] << ' ';
    }
    cout << endl;

    delete[] liczby;
    return 0;
}