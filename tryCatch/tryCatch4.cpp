#include <iostream>
#include <exception>
using namespace std;

// Custom exception class for division by zero
class DivideByZeroException : public exception
{
public:
    const char *what() const noexcept override
    {
        return "Błąd: Nie dziel przez zero!";
    }
};

int main()
{
    try
    {
        int a, b;
        cout << "Podaj a: ";
        cin >> a;
        cout << "Podaj b: ";
        cin >> b;

        if (b == 0)
        {
            throw DivideByZeroException();
        }

        cout << "Wynik dzielenia: " << a / b << endl;
    }
    catch (const exception &e)
    {
        cout << "Wyjątek przechwycony: " << e.what() << endl;
    }

    return 0;
}