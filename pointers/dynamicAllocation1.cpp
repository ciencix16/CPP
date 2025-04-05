#include <iostream>
using namespace std;

int main()
{
    // 1. Declare pointer variables for dynamic memory allocation
    int *dynamicIntPtr = nullptr;       // Pointer for an integer
    double *dynamicDoublePtr = nullptr; // Pointer for a double

    // 2. Allocate memory for one integer using the 'new' operator
    dynamicIntPtr = new int; // Dynamically allocates memory for one integer

    // 3. Check if memory allocation was successful
    if (dynamicIntPtr == nullptr)
    {
        cout << "Memory allocation for integer failed!" << endl;
        return 1; // Exit if memory allocation fails
    }

    // 4. Allocate memory for one double using the 'new' operator
    dynamicDoublePtr = new double; // Dynamically allocates memory for one double

    // 5. Check if memory allocation was successful
    if (dynamicDoublePtr == nullptr)
    {
        cout << "Memory allocation for double failed!" << endl;
        return 1; // Exit if memory allocation fails
    }

    // 6. Assign values to the dynamically allocated memory
    *dynamicIntPtr = 42;         // Assign value to the memory location of dynamicIntPtr
    *dynamicDoublePtr = 3.14159; // Assign value to the memory location of dynamicDoublePtr

    // 7. Output the values and addresses of the dynamically allocated memory
    cout << "Value of dynamic integer: " << *dynamicIntPtr << endl;
    cout << "Address of dynamic integer: " << dynamicIntPtr << endl;
    cout << "Value of dynamic double: " << *dynamicDoublePtr << endl;
    cout << "Address of dynamic double: " << dynamicDoublePtr << endl;

    // 8. Dynamically allocate memory for an array of integers
    int *dynamicArrayPtr = new int[5]; // Allocate memory for an array of 5 integers

    // 9. Check if memory allocation for the array was successful
    if (dynamicArrayPtr == nullptr)
    {
        cout << "Memory allocation for the array failed!" << endl;
        return 1; // Exit if memory allocation fails
    }

    // 10. Initialize the array values
    for (int i = 0; i < 5; i++)
    {
        dynamicArrayPtr[i] = i * 10; // Assign values to the array elements
    }

    // 11. Output the array values and addresses
    cout << "Array values and addresses:" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << "Value: " << dynamicArrayPtr[i] << ", Address: " << &dynamicArrayPtr[i] << endl;
    }

    // 12. Free the dynamically allocated memory
    delete dynamicIntPtr;     // Free memory allocated for the single integer
    delete dynamicDoublePtr;  // Free memory allocated for the single double
    delete[] dynamicArrayPtr; // Free memory allocated for the array of integers

    // 13. After freeing memory, it is good practice to set the pointer to nullptr
    dynamicIntPtr = nullptr;
    dynamicDoublePtr = nullptr;
    dynamicArrayPtr = nullptr;

    cout << "Memory has been successfully freed." << endl;

    return 0;
}