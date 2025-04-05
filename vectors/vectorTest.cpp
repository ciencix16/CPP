#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;

vector<int> wekt; // Global vector

int rozmiar;
int liczba1;
int liczba2;
int liczba3;

// Function to print all elements
void wypisz(const vector<int> &wekt)
{
    for (const int &element : wekt)
    {
        cout << element << " ";
    }
    cout << endl;
}

// Function to fill the vector with random numbers (passed by reference)
void wypelnij(vector<int> &wekt)
{
    srand(time(NULL));
    for (int i = 0; i < rozmiar; ++i)
    {
        wekt.push_back(rand() % 60 + 21); // Random number from 21 to 80
    }
}

// Function to print elements divisible by 3
void wypisz3(const vector<int> &wekt)
{
    for (const int &element : wekt)
    {
        if (element % 3 == 0)
        {
            cout << element << " ";
        }
    }
    cout << endl;
}

int main()
{
    cout << "Podaj rozmiar wektoru: ";
    cin >> rozmiar;

    wypelnij(wekt);

    cout << "Zawartość wektora:\n";
    wypisz(wekt);

    cout << "Liczby podzielne przez 3:\n";
    wypisz3(wekt);

    // Insert three numbers
    cout << "Podaj 3 liczby do wektora:\n";
    cin >> liczba1 >> liczba2 >> liczba3;

    wekt.insert(wekt.begin() + 1, liczba3);
    wekt.insert(wekt.begin() + 1, liczba2);
    wekt.insert(wekt.begin() + 1, liczba1);

    wekt.push_back(liczba1);
    wekt.push_back(liczba2);
    wekt.push_back(liczba3);

    // Delete the 4th element (index 3)
    if (wekt.size() > 3)
    {
        wekt.erase(wekt.begin() + 3);
    }

    cout << "Liczby podzielne przez 3 po zmianach:\n";
    wypisz3(wekt);

    return 0;
}