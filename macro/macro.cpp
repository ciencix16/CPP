#include <iostream>
// Definicje makrofunkcji:
#define IS_LETTER(c) (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')
#define IS_DIGIT(c) (c >= '0' && c <= '9')
#define IS_UPPER(c) c >= 'A' && c <= 'Z'
#define IS_LOWER(c) c >= 'a' && c <= 'z'
// Definicja makroprocedury READ_VARIABLE_1:
#define READ_VARIABLE_1(m, v) \
    std::cout << m;           \
    std::cin >> v
// Definicja wieloliniowej makroprocedury READ_VARIABLE_2:
#define READ_VARIABLE_2(m, v) \
    {                         \
        std::cout << m;       \
        std::cin >> v;        \
    }
using namespace std;
int main()
{
    int liczba;
    // Wywołanie procedury READ_VARIABLE_1:
    READ_VARIABLE_1("Podaj wartość liczby całkowitej: ", liczba);
    cout << liczba << endl;
    char znak[1];
    // Wywołanie procedury READ_VARIABLE_2:
    READ_VARIABLE_2("Podaj znak: ", znak[0]);
    if (IS_LETTER(znak[0]))
    { // wywołanie makrofunkcji IS_LETTER
        cout << "Wprowadzono literę " << znak[0] << endl;
        if (IS_LOWER(znak[0])) // wywołanie makrofunkcji IS_LOWER
            cout << "Litera jest mała" << endl;
        else
            cout << "Litera jest duża" << endl;
    }
    else if (IS_DIGIT(znak[0])) // wywołanie makrofunkcji IS_DIGIT
        cout << "Wprowadzono cyfrę " << znak[0] << endl;
    else
        cout << "Naciśnięto klawisz różny od litery i cyfry: " << znak[0] << endl;
    return 0;
}