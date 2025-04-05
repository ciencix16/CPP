#include <iostream>
#include <cstring> // For strcpy function

using namespace std;

// Union declaration
union Data
{
    int i;        // Integer member
    float f;      // Float member
    char str[20]; // String member
};

// Struct with a union inside
struct DataContainer
{
    int type; // 0 for int, 1 for float, 2 for string
    union
    {
        int i;
        float f;
        char str[20];
    };
};

// Main function demonstrating union usage
int main()
{
    // Demonstrating basic union usage
    Data data;

    // Assigning and accessing integer member of union
    data.i = 10;
    cout << "Integer: " << data.i << endl;

    // Now assign a value to the float member
    data.f = 220.5;
    cout << "Float: " << data.f << endl;

    // Assigning a string to the string member
    strcpy(data.str, "Hello, Union!");
    cout << "String: " << data.str << endl;

    // When we assign a new value to a union member, the previous value is overwritten
    cout << "\nAfter overwriting with string:" << endl;
    cout << "Integer: " << data.i << endl;  // This will print undefined behavior
    cout << "Float: " << data.f << endl;    // This will also print undefined behavior
    cout << "String: " << data.str << endl; // This will print the string

    // Demonstrating union in a struct
    DataContainer container;

    // Store an integer
    container.type = 0;
    container.i = 42;
    cout << "\nInteger stored in container: " << container.i << endl;

    // Store a float
    container.type = 1;
    container.f = 3.14;
    cout << "Float stored in container: " << container.f << endl;

    // Store a string
    container.type = 2;
    strcpy(container.str, "Union in C++");
    cout << "String stored in container: " << container.str << endl;

    // Size of the union
    cout << "\nSize of union Data: " << sizeof(data) << " bytes" << endl;
    cout << "Size of union DataContainer: " << sizeof(container) << " bytes" << endl;

    // Memory usage demonstration
    union MyUnion
    {
        int i;    // 4 bytes
        double d; // 8 bytes
        char c;   // 1 byte
    };

    MyUnion u;
    cout << "\nSize of union MyUnion: " << sizeof(u) << " bytes" << endl;

    return 0;
}