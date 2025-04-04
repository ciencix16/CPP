#include <iostream>
using namespace std;

char plec(string PESEL) {
    if ((PESEL[9] - '0') % 2 == 0) { // Convert char to integer
        return 'K';
    } else {
        return 'M';
    }
}

bool sumaKontrolna(string PESEL) {
    if (PESEL.length() != 11) {
        cout << "Niepoprawna dlugosc PESEL!" << endl;
        return false;
    }

    int wagi[] = {1, 3, 7, 9, 1, 3, 7, 9, 1, 3}; // Weights for PESEL checksum
    int S = 0;

    for (int i = 0; i < 10; i++) {
        S += (PESEL[i] - '0') * wagi[i]; // Convert character to digit and apply weight
    }

    int R = (10 - (S % 10)) % 10; // Compute the checksum digit

    return (R == (PESEL[10] - '0')); // Compare with last digit of PESEL
}

void dataurodzenia(string PESEL) {
    int year = (PESEL[0] - '0') * 10 + (PESEL[1] - '0');
    int month = (PESEL[2] - '0') * 10 + (PESEL[3] - '0');

    if (month > 80 && month <= 92) { // Year 1800-1899
        year += 1800;
        month -= 80;
    } else if (month > 0 && month <= 12) { // Year 1900-1999
        year += 1900;
    } else if (month > 20 && month <= 32) { // Year 2000-2099
        year += 2000;
        month -= 20;
    } else if (month > 40 && month <= 52) { // Year 2100-2199
        year += 2100;
        month -= 40;
    } else if (month > 60 && month <= 72) { // Year 2200-2299
        year += 2200;
        month -= 60;
    } else {
        cout << "Niepoprawny miesiac w PESEL!" << endl;
        return;
    }

    int day = (PESEL[4] - '0') * 10 + (PESEL[5] - '0');

    cout << "Data urodzenia: " << day << "-" << month << "-" << year << endl;
}

int main() {
    cout << "Ten program sprawdza poprawność numeru PESEL i określa płeć.\n";

    string PESEL;
    cout << "Podaj swoj PESEL: ";
    cin >> PESEL;

    if (PESEL.length() != 11) {
        cout << "PESEL musi miec 11 cyfr!" << endl;
        return 1;
    }

    cout << "Płeć: " << (plec(PESEL) == 'K' ? "Kobieta" : "Mężczyzna") << endl;

    if (sumaKontrolna(PESEL)) {
        cout << "PESEL jest poprawny zgodnie z sumą kontrolną." << endl;
    } else {
        cout << "PESEL jest błędny!" << endl;
    }

    dataurodzenia(PESEL);

    return 0;
}