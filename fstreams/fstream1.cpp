#include <fstream>
#include <iostream>
using namespace std;

int main()
{
    int suma;
    int zPliku;
    ofstream zapis("wyjscie1.txt");
    zapis << 5 << " " << 10 << " " << 15;
    ifstream odczyt("wyjscie1.txt");
    while (!odczyt.eof())
    {
        odczyt >> zPliku;
        suma = suma + zPliku;
    }
    cout << suma;
    odczyt.close();
    zapis.close();

    return 0;
}