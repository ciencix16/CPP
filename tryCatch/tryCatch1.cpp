#include <iostream>
using namespace std;

int main()
{
    try
    {
        int wzrost;
        cout << endl
             << "podaj wzrost:";
        cin >> wzrost;
        if (wzrost < 210)
        {
            throw wzrost;
        }
        if (wzrost >= 210 && wzrost <= 220)
        {
            throw 1.0;
        }
        if (wzrost > 220 && wzrost <= 250)
        {
            throw 1.0f;
        }
        if (wzrost > 250)
        {
            throw "hi";
        }
    }
    catch (int)
    {
        cout << endl
             << "Za niski";
    }
    catch (double)
    {
        cout << endl
             << "ok";
    }
    catch (float)
    {
        cout << endl
             << "Za wysoki";
    }
    catch (...)
    {
        cout << endl
             << "Alien";
    }

    return 0;
}