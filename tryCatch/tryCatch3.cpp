#include <iostream>
#include <stdexcept>
using namespace std;

// Custom exception class for logic errors
class MyLogicError : public logic_error
{
public:
    MyLogicError(const string &msg) : logic_error(msg) {}
};

int main()
{
    try
    {
        double a;
        cout << "Podaj liczbe: ";
        cin >> a;

        if (a < 0)
        {
            throw runtime_error("Liczba jest ujemna");
        }
        else if (a != static_cast<int>(a)) // not an integer
        {
            throw MyLogicError("Liczba jest niecałkowita");
        }

        cout << "Podana liczba: " << static_cast<int>(a) << endl;
    }
    catch (const runtime_error &e)
    {
        cout << "Błąd runtime_error: " << e.what() << endl;
    }
    catch (const MyLogicError &e)
    {
        cout << "Błąd MyLogicError: " << e.what() << endl;
    }

    return 0;
}