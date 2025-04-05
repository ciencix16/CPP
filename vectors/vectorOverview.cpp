#include <iostream>
#include <vector> // Dołączenie do programu wektorów.
using namespace std;
int main()
{
    vector<int> wektor = {10, 20, 30, 40, 50}; // Deklaracja i inicjalizacja wektora o nazwie wektor.
    /*
    Wektor ma nazwe "wektor", jego typ i typ elementow w nim zawartych
    to "int", rozmiar tego wektora wynosi "5", poniewaz ma on w sobie
    5 elementow (10,20,30,40,50)
     */
    for (int i = 0; i < wektor.size(); i++) // Petla wypisujaca elementy wektora.
    {
        cout << "wektor[" << i << "] = " << wektor[i] << endl; // Przy kazdym przebiegu petla wypisze "wektor (numer elementu) = (wartosc elementu)".
    }
    wektor.push_back(60);                                                        // Dopisanie nowego elementu z zadaną wartością na końcu wektora.
    cout << "Ostatni element (dopisany): " << wektor[wektor.size() - 1] << endl; // Wypisanie ostatniego elementu wektora.
    wektor.insert(wektor.begin(), 0);                                            // Wstawienie nowego elementu o wartości "0" przed pierwszym elementem:
    cout << "Pierwszy element (dopisany): " << wektor[0] << endl;
    for (int i = 0; i < wektor.size(); i++) // Petla wypisujaca elementy wektora.
    {
        cout << "wektor[" << i << "] = " << wektor[i] << endl; // Przy kazdym przebiegu petla wypisze "wektor (numer elementu) = (wartosc elementu)".
    }
    cout << wektor.size() << endl;                  // Wyswietla ile elementóów ma wektor.
    cout << wektor.capacity() << endl;              // Wyświetla ile pamieci zajmuje wskażnik do wektora.
    wektor.resize(5);                               // Zmieniamy rozmiar, wyrzucając z elementy końca i robiąc wolne miejsca na koncu.
    wektor.insert(wektor.begin() + 1, 1);           // Wstawiamy na pierwsze miejsce po zerowym (drugi element wektora).
    wektor.erase(wektor.begin() + 1);               // usuwamu pierwszy element po zerowym (drugi element wektora).
    wektor.erase(wektor.begin() + 1, wektor.end()); // usuwamy przedzial elementów od drugieg do konca.
    wektor.clear();                                 // W ten sposób można zwalniać pamięć na zaallokowaną na stercie dla wektora.
    wektor.resize(0);                               // W ten sposób tez można zwalniać pamięć na zaallokowaną na stercie dla wektora.
    for (int i = 0; i < wektor.size(); i++)         // Petla wypisujaca elementy wektora.
    {
        cout << "wektor[" << i << "] = " << wektor[i] << endl; // Przy kazdym przebiegu petla wypisze "wektor (numer elementu) = (wartosc elementu)".
    }
    cout << *wektor.begin() << endl; // Wypisuje lokalizacje pierwszego elementu wektora
    if (wektor.empty())              // Sprawdzenie, czy wektor jest pusty
    {
        cout << "Wektor jest pusty." << endl;
    }
    else
    {
        cout << "Wektor nie jest pusty." << endl;
    }
    cout << "Element na pozycji 3: " << wektor[3] << endl; // Dostęp do elementu po indeksie

    return 0;
}