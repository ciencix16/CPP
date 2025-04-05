#include <iostream>
#include <vector>
using namespace std;
void print(vector<int> v)
{
    cout << "values: ";
    for (int i = 0; i < v.size(); ++i)
    {
        cout << v[i];
        if (i != v.size() - 1)
            cout << ", ";
    }
}

int sum(vector<int> v)
{
    double sum{};
    for (int val : v)
    {
        sum += val;
    }
    return sum;
}
double average(vector<int> v)
{
    double elementsSum = sum(v);
    double average = elementsSum / static_cast<double>(v.size());
    cout << "average: ";
    return average;
}
void menu(vector<int> v)
{
    char selection{};
    do
    {
        cout << "\nselect an option\n";
        cout << "p - print v elements\n";
        cout << "a - add new element\n";
        cout << "v - average of all elements\n";
        cout << "s - sum \n";
        cout << "q - quit\n";
        cout << "Selection: ";
        cin >> selection;
        if (selection == 'p' || selection == 'P')
        {
            if (v.size() != 0)
                print(v);
            else
                cout << "no data";
            cout << endl;
        }
        else if (selection == 'a' || selection == 'A')
        {
            int n;
            cin >> n;
            v.push_back(n);
            cout << endl;
        }
        else if (selection == 's' || selection == 'S')
        {
            if (v.size() != 0)
                cout << "" << sum(v);
            else
                cout << "no data";
            cout << endl;
        }
        else if (selection == 'v' || selection == 'V')
        {
            if (v.size() != 0)
                cout << "" << average(v);
            else
                cout << "no data";
            cout << endl;
        }
        else if (selection == 'q' || selection == 'Q')
        {
            cout << "Goodbye!" << endl;
        }
    } while (selection != 'q' && selection != 'Q');
}
int main()
{
    vector<int> v{};
    menu(v);
    return 0;
}