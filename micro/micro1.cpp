#include <iostream>
#include <iomanip>

#define IS_EVEN(n) ((n) % 2 == 0)
#define THIRD_POWER(n) ((n) * (n) * (n))
#define TRUE(n)                                           \
    {                                                     \
        if (n == 0)                                       \
        {                                                 \
            cout << ("False") << endl;                    \
        }                                                 \
        if (n == 1)                                       \
        {                                                 \
            cout << ("True") << endl;                     \
        }                                                 \
        if (n != 0 && n != 1)                             \
        {                                                 \
            cout << ("To nima wartosc logiczna") << endl; \
        }                                                 \
    }

using namespace std;

int main()
{
    // cout << boolalpha;
    cout << "is even\n";
    cout << "enter num:\n";
    int temp{};
    cin >> temp;
    int logic = IS_EVEN(temp);
    cout << "result: " << endl;
    TRUE(logic);
    cout << "the third power\n";
    cout << "enter num:\n";
    cin >> temp;
    cout << "result: " << THIRD_POWER(temp) << endl;
}