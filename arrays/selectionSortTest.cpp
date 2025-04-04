#include <iostream>

class Sorter
{
private:
    int numbers[10];

    int findMaxIndex(int start)
    {
        int maxIndex = start;
        for (int i = start + 1; i < 10; i++)
        {
            if (numbers[i] > numbers[maxIndex])
            {
                maxIndex = i;
            }
        }
        return maxIndex;
    }

public:
    void readNumbers()
    {
        std::cout << "Podaj 10 liczb calkowitych:\n";
        for (int i = 0; i < 10; i++)
        {
            std::cin >> numbers[i];
        }
    }

    void sortDescending()
    {
        for (int i = 0; i < 9; i++)
        {
            int maxIndex = findMaxIndex(i);
            if (maxIndex != i)
            {
                std::swap(numbers[i], numbers[maxIndex]);
            }
        }
    }

    // Metoda do wyświetlania posortowanej tablicy
    void displayNumbers()
    {
        std::cout << "Posortowana tablica (malejąco): ";
        for (int i = 0; i < 10; i++)
        {
            std::cout << numbers[i] << " ";
        }
        std::cout << std::endl;
    }

    void displayMaxNumber()
    {
        std::cout << "Najwieksza liczba w tablicy: " << numbers[0] << std::endl;
    }
};

int main()
{
    Sorter sorter;
    sorter.readNumbers();
    sorter.sortDescending();
    sorter.displayNumbers();
    sorter.displayMaxNumber();
    return 0;
}