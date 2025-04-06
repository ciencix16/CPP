#include <iostream>
#include <cstdlib>
using namespace std;

void fillDynamicArray(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        arr[i] = rand() % 6 + 1;
    }
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << endl
             << "Kostka " << i + 1 << ": " << arr[i] << " ";
    }
    cout << endl;
}

int countPoints(int arr[], int size)
{
    int count[7] = {0};
    int points = 0;

    for (int i = 0; i < size; i++)
        count[arr[i]]++;
    for (int i = 1; i <= 6; i++)
    {
        if (count[i] >= 2)
            points += count[i] * i;
    }

    return points;
}

int main()
{
    int dynamicSize;
    srand(time(0));
    string choice;
    do
    {
        cout << endl
             << "Iloma kostkami chcesz rzucić? (3-10) ";
        cin >> dynamicSize;
        if (dynamicSize < 3 || dynamicSize > 10)
        {
            cout << "Wpisz ilość w dozwolonym limicie" << endl;
        }
        else
        {
            int *dynamicArr = new int[dynamicSize];
            fillDynamicArray(dynamicArr, dynamicSize);
            printArray(dynamicArr, dynamicSize);
            cout << endl
                 << "Ilość punktów: " << countPoints(dynamicArr, dynamicSize) << endl;
            delete[] dynamicArr;
            cout << "Czy chcesz rzucić jeszcze raz? (t/n) ";
            cin >> choice;
            if (choice == "n" || choice == "N")
            {
                cout << "Goodbye!" << endl;
            }
            return 0;
        }
    } while (choice == "t" || choice == "T");
}