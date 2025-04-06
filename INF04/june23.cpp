#include <iostream>
using namespace std;

void sitoErastotenesa(int n)
{
    bool liczbaPierwsza[n + 1];
    for (int i = 2; i <= n; i++)
    {
        liczbaPierwsza[i] = true;
    }

    for (int i = 2; i * i <= n; i++)
    {
        if (liczbaPierwsza[i])
        {
            for (int j = i * i; j <= n; j += i)
            {
                liczbaPierwsza[j] = false;
            }
        }
    }
    cout << "Liczby pierwsze w zakresie od 2 do " << n << ": ";
    for (int i = 2; i <= n; ++i)
    {
        if (liczbaPierwsza[i])
        {
            cout << i << " ";
        }
    }
    cout << endl;
}

int main()
{
    int n;

    cout << "Podaj zakres n: ";
    cin >> n;
    sitoErastotenesa(n);
    return 0;
}