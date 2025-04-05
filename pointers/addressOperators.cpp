#include <iostream>
using namespace std;

int main()
{
    // Deklaracja i inicjalizacja zmiennej o nazwie zmiennaInt należącej do typu całkowitego int:
    int zmiennaInt = 10;

    // Prezentacja informacji dotyczących zmiennej zmiennaInt na ekranie monitora:
    cout << "Informacje dotyczące zmiennej zmiennaInt:" << endl;
    // Wyświetlenie wartości przechowywanej w zmiennej zmiennaInt:
    cout << "wartość: " << zmiennaInt << endl;
    // Prezentacja rozmiaru zmiennej zmiennaInt:
    cout << "rozmiar: " << sizeof(zmiennaInt) << " bajty" << endl;
    // Wykorzystanie operatora adresu w celu określenia adresu zmiennej zmiennaInt:
    cout << "adres: " << &zmiennaInt << endl; // Adres zmiennej zmiennaInt w systemie szesnastkowym

    // Deklaracja i inicjalizacja zmiennej o nazwie zmiennaDouble należącej do typu rzeczywistego double:
    double zmiennaDouble = 1.5;

    // Prezentacja informacji dotyczących zmiennej zmiennaDouble w konsoli na ekranie monitora:
    cout << "Informacje dotyczące zmiennej zmiennaDouble:" << endl;
    cout << "wartość: " << zmiennaDouble << endl;
    cout << "rozmiar: " << sizeof(zmiennaDouble) << " bajty" << endl;
    cout << "adres: " << &zmiennaDouble << endl; // Adres zmiennej zmiennaDouble w systemie szesnastkowym

    // Zmiana typu zmiennych na long int i float:
    long int zmiennaLongInt = 1000000;
    float zmiennaFloat = 3.14;

    // Prezentacja informacji dotyczących zmiennej zmiennaLongInt:
    cout << "Informacje dotyczące zmiennej zmiennaLongInt:" << endl;
    cout << "wartość: " << zmiennaLongInt << endl;
    cout << "rozmiar: " << sizeof(zmiennaLongInt) << " bajty" << endl;
    cout << "adres: " << &zmiennaLongInt << endl; // Adres zmiennej zmiennaLongInt w systemie szesnastkowym

    // Prezentacja informacji dotyczących zmiennej zmiennaFloat:
    cout << "Informacje dotyczące zmiennej zmiennaFloat:" << endl;
    cout << "wartość: " << zmiennaFloat << endl;
    cout << "rozmiar: " << sizeof(zmiennaFloat) << " bajty" << endl;
    cout << "adres: " << &zmiennaFloat << endl; // Adres zmiennej zmiennaFloat w systemie szesnastkowym

    return 0;
}