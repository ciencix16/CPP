#include <iostream>
#include <cstring>
#include <string>

using namespace std;

int main()
{
    cout << "\n1--------------------------------------------------------------\n";
    char brand[20];
    char model[20];
    char year[5];

    cout << "Enter the brand of the car: ";
    cin.getline(brand, 20);

    cout << "Enter the model of the car: ";
    cin.getline(model, 20);

    cout << "Enter the year of production of the car: ";
    cin.getline(year, 5);

    cout << "\nCar Details:\n";
    cout << "Brand: " << brand << endl;
    cout << "Model: " << model << endl;
    cout << "Year of Production: " << year << endl;

    cout << "\n2--------------------------------------------------------------\n";

    char slowo1[20], slowo2[20], slowo3[20];
    cout << "podaj 1 slowo ";
    cin.get(slowo1, 20);
    cin.ignore(20, '\n');
    cout << "podaj 2 slowo ";
    cin.get(slowo2, 20);
    cin.ignore(20, '\n');
    cout << "podaj 3 slowo ";
    cin.get(slowo3, 20);
    cin.ignore(20, '\n');
    cout << slowo1 << " " << slowo2 << " " << slowo3;

    cout << "\n3--------------------------------------------------------------\n";

    char napis1[20], napis2[20];
    cout << "podaj 1 slowo ";
    cin.get(napis1, 20);
    cin.ignore(20, '\n');
    cout << "podaj 2 slowo ";
    cin.get(napis2, 20);
    cin.ignore(20, '\n');
    int check = strcmp(napis1, napis2);
    if (check == 0)
    {
        cout << "Napisy są identyczne";
    }
    else
    {
        cout << "Napisy NIE są identyczne";
    }

    cout << "\n 4-------------------------------------- \n";
    char sprawdz1[30], sprawdz2[30];
    cout << "Podaj pierwszy napis: ";
    cin.get(sprawdz1, 30);
    cin.ignore(30, '\n');
    cout << "Podaj drugi napis: ";
    cin.get(sprawdz2, 30);
    cin.ignore(30, '\n');
    char *substringPosition = strstr(sprawdz2, sprawdz1);
    if (substringPosition != nullptr)
    {
        cout << "Napis " << sprawdz1 << " stanowi podłańcuch łańcucha " << sprawdz2 << " od pozycji " << substringPosition - sprawdz2;
    }
    else
    {
        cout << "Napis " << sprawdz1 << " nie jest podłańcuchem łańcucha " << sprawdz2;
    }

    cout << "\n 5-------------------------------------- \n";
    char miejscowosc[50];
    cout << "Podaj pelna nazwe miejscowosci: ";
    cin.getline(miejscowosc, 50);
    cout << miejscowosc;

    cout << "\n 6-------------------------------------- \n";
    char jedynka[20], dwojka[20];
    cout << "Podaj pierwsze slowo: ";
    cin.get(jedynka, 20);
    cin.ignore(20, '\n');
    cout << "Podaj drugie slowo: ";
    cin.get(dwojka, 20);
    cin.ignore(20, '\n');
    strcpy(jedynka, dwojka);
    cout << "Pierwsze slowo: " << jedynka << ", Drugie slowo: " << dwojka;
    return 0;
}