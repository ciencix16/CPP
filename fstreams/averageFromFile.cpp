#include <fstream>
#include <iostream>
#include <cstdlib>
using namespace std;

void randomNumbersToFile(int n)
{
    fstream plik;
    plik.open("averageFromFile.txt", ios::out);
    srand(time(NULL));
    plik << rand() % 10;
    for (int i = 1; i < n; i++)
    {
        srand(time(NULL) * (i + 1));
        plik << " " << rand() % 10;
    }
    plik.close();
}
int fileSize()
{
    fstream plik;
    plik.open("averageFromFile.txt", ios::in);
    int i{};
    int zPliku{};
    while (!plik.eof())
    {
        plik >> zPliku;
        i++;
    }
    plik.close();
    return i;
}
int *fileToArray(int n)
{
    fstream plik;

    int *arr = new int[n];
    plik.open("averageFromFile.txt", ios::in);
    int i{};
    int fromFile{};
    while (i <= n)
    {
        plik >> fromFile;
        arr[i] = fromFile;
        i++;
    }
    plik.close();
    return arr;
}
double averageFromArray(const int arr[], int size)
{
    double sum{};
    for (int i = 0; i < size; i++)
    {
        sum += *(arr) + i;
    }
    return sum / static_cast<double>(size);
}

int main()
{
    randomNumbersToFile(10);
    int size = fileSize();
    int *arr = fileToArray(size);
    cout << "srednia: " << averageFromArray(arr, 10);
    return 0;
}