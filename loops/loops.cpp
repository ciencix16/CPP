#include <iostream>
using namespace std;

int main()
{
    // 1. For loop (Standard)
    cout << "For loop (Standard):\n";
    // Standard for loop with initialization, condition, and increment
    for (int i = 0; i < 5; ++i)
    {
        cout << "Iteration " << i + 1 << endl; // Display the iteration number
    }

    // 2. For loop (With multiple variables)
    cout << "\nFor loop (Multiple variables):\n";
    // Loop with two variables i and j, where i increments and j decrements
    for (int i = 0, j = 5; i < 5; ++i, --j)
    {
        cout << "i: " << i << ", j: " << j << endl; // Display both variables
    }

    // 3. For loop (Range-based)
    cout << "\nFor loop (Range-based):\n";
    // Range-based for loop, iterates over each element of an array or container
    for (int val : {1, 2, 3, 4, 5})
    {
        cout << "Value: " << val << endl; // Display each value in the range
    }

    // 4. While loop (Standard)
    cout << "\nWhile loop (Standard):\n";
    // Standard while loop, runs until the condition is false
    int i = 0;
    while (i < 5)
    {
        cout << "Iteration " << i + 1 << endl; // Display the iteration number
        ++i;                                   // Increment the variable to eventually break the loop
    }

    // 5. While loop (Condition never met)
    cout << "\nWhile loop (Condition never met):\n";
    // This while loop will never run because the condition is false initially
    int count = 0;
    while (count > 5)
    { // Condition is false, so loop won't run
        cout << "This will not be printed.\n";
        count++;
    }

    // 6. Do-while loop (Standard)
    cout << "\nDo-while loop (Standard):\n";
    // Do-while loop guarantees at least one iteration because condition is checked after execution
    int j = 0;
    do
    {
        cout << "Iteration " << j + 1 << endl; // Display the iteration number
        ++j;                                   // Increment to eventually meet the stopping condition
    } while (j < 5); // Loop stops when j is no longer less than 5

    // 7. Do-while loop (With breaking condition)
    cout << "\nDo-while loop (Breaking condition):\n";
    // This loop will break early when k equals 3
    int k = 0;
    do
    {
        if (k == 3)
        {
            cout << "Breaking loop at iteration " << k + 1 << endl; // Print when loop breaks
            break;                                                  // Exit the loop if k is 3
        }
        cout << "Iteration " << k + 1 << endl; // Display the iteration number
        ++k;                                   // Increment the variable k
    } while (k < 5);

    // 8. For loop (Nested loop)
    cout << "\nFor loop (Nested):\n";
    // Nested for loop: Outer loop runs 3 times, inner loop runs 3 times for each outer iteration
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            cout << "i: " << i << ", j: " << j << endl; // Display values of both i and j
        }
    }

    // 9. While loop (Infinite loop with break)
    cout << "\nWhile loop (Infinite loop with break):\n";
    // Infinite while loop that breaks when l is 3
    int l = 0;
    while (true)
    { // Infinite loop condition
        if (l == 3)
        {
            cout << "Breaking infinite loop at iteration " << l + 1 << endl;
            break; // Break the infinite loop when l is 3
        }
        cout << "Iteration " << l + 1 << endl; // Display the iteration number
        ++l;                                   // Increment l to eventually meet the breaking condition
    }

    // 10. For loop (Continue statement)
    cout << "\nFor loop (Continue statement):\n";
    // This loop skips iteration when i equals 2, using the continue statement
    for (int i = 0; i < 5; ++i)
    {
        if (i == 2)
        {
            continue; // Skip the rest of the loop when i equals 2
        }
        cout << "Iteration " << i + 1 << endl; // Display the iteration number
    }

    // 11. While loop (Continue statement)
    cout << "\nWhile loop (Continue statement):\n";
    // This while loop skips iteration when m equals 3, using the continue statement
    int m = 0;
    while (m < 5)
    {
        if (m == 3)
        {
            ++m;
            continue; // Skip the rest of the loop when m equals 3
        }
        cout << "Iteration " << m + 1 << endl; // Display the iteration number
        ++m;                                   // Increment m
    }

    // 12. Do-while loop (Continue statement)
    cout << "\nDo-while loop (Continue statement):\n";
    // This do-while loop skips iteration when n equals 1, using the continue statement
    int n = 0;
    do
    {
        if (n == 1)
        {
            ++n;
            continue; // Skip iteration when n equals 1
        }
        cout << "Iteration " << n + 1 << endl; // Display the iteration number
        ++n;                                   // Increment n
    } while (n < 5);

    // 13. For-each loop (Range-based for loop)
    cout << "\nFor-each loop (Range-based):\n";
    // Range-based for loop iterating over an array
    int arr[] = {10, 20, 30, 40, 50};
    // Loop through each element in the array and display it
    for (int val : arr)
    {
        cout << "Value: " << val << endl; // Display each value in the array
    }

    // 14. For-each loop (Using reference to modify elements)
    cout << "\nFor-each loop (Using reference):\n";
    // Modify the values in the array using reference in the loop
    for (int &val : arr)
    {
        val += 5; // Increase each element by 5
    }
    // Print updated array values
    for (int val : arr)
    {
        cout << "Updated value: " << val << endl; // Display the updated array values
    }

    return 0; // End of the program
}