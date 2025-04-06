#include <iostream>
using namespace std;

class Tablica
{
    int SIZE;
    int *dynArr;

public:
    void setSize(int size)
    {
        SIZE = size;
    }
    int getSize()
    {
        return SIZE;
    }
    void fill()
    {
        for (int i = 0; i < SIZE; i++)
        {
            dynArr[i] = rand() % 1000 + 1;
        }
    }
    ~Tablica()
    {
        delete[] dynArr;
    }
    Tablica(int size)
    {
        SIZE = size;
        dynArr = new int[SIZE];
        fill();
    }
    void display()
    {
        for (int i = 0; i < SIZE; i++)
        {
            cout << i << ": " << dynArr[i] << endl;
        }
    }
    int Search(int index)
    {
        for (int i = 0; i < SIZE; i++) // Use a simple for-loop
        {
            if (dynArr[i] == index)
            {
                cout << "Znaleziono szukaną wartość! Znajduje się na pozycji: " << i << endl;
                return i; // Return the index where it was found
            }
        }
        cout << "Nie znaleziono szukanej wartości." << endl;
        return -1; // Return -1 if not found
    }
    void displayOdd()
    {
        for (int i = 0; i < SIZE; i++)
        {
            if (dynArr[i] % 2 != 0)
            {
                cout << i << ": " << dynArr[i] << endl;
            }
        }
    }
    double getSum()
    {
        int sum = 0;
        for (int i = 0; i < SIZE; i++)
        {
            sum += dynArr[i];
        }
        return sum;
    }
    double findAverage()
    {
        return getSum() / SIZE;
    }
};
int main()
{
    Tablica tab(100);
    cout << endl
         << "Displaying everything" << endl;
    tab.display();
    cout << "Searching for the instance of 44" << endl;
    tab.Search(44);
    cout << "Displaying odd numbers" << endl;
    tab.displayOdd();
    cout << "Displaying the average value" << endl;
    cout << tab.findAverage();
    return 0;
}