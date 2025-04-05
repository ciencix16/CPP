#include <iostream>
using namespace std;

int main()
{
    // Declaration of pointers for each grade
    double *w_polish = nullptr, *w_math = nullptr, *w_english = nullptr, *w_computerScience = nullptr;

    // Dynamically allocating memory for each grade
    w_polish = new double;
    w_math = new double;
    w_english = new double;
    w_computerScience = new double;

    // Asking for user input for each grade
    cout << "Enter grade for Polish: ";
    cin >> *w_polish;

    cout << "Enter grade for Math: ";
    cin >> *w_math;

    cout << "Enter grade for English: ";
    cin >> *w_english;

    cout << "Enter grade for Computer Science: ";
    cin >> *w_computerScience;

    // Calculating the average of the grades
    double average = (*w_polish + *w_math + *w_english + *w_computerScience) / 4;

    // Outputting the result
    cout << "The average grade is: " << average << endl;

    // Freeing dynamically allocated memory
    delete w_polish;
    delete w_math;
    delete w_english;
    delete w_computerScience;

    return 0;
}