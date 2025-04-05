#include <iostream>
#include <string>

using namespace std;

// Define a basic structure called "Person"
struct Person
{
    string name;   // Member variable to store the name
    int age;       // Member variable to store the age
    double height; // Member variable to store the height

    // A member function inside the structure to display data
    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Height: " << height << " meters" << endl;
    }
};

// Function to display the information of a person (passing by reference)
void displayPerson(const Person &p)
{
    cout << "Name: " << p.name << ", Age: " << p.age << ", Height: " << p.height << " meters" << endl;
}

// Function to return a structure
Person createPerson(string name, int age, double height)
{
    Person newPerson;
    newPerson.name = name;
    newPerson.age = age;
    newPerson.height = height;
    return newPerson;
}

int main()
{
    // ---------------- Creating and Initializing Structures ----------------

    // Initializing a structure directly
    Person person1;
    person1.name = "Alice";
    person1.age = 30;
    person1.height = 1.75;

    // Displaying the information using the member function
    cout << "Person 1 Information:" << endl;
    person1.display(); // Output: Name, Age, Height of person1
    cout << endl;

    // Initializing structure with an aggregate initialization
    Person person2 = {"Bob", 25, 1.80};

    // Displaying information of person2
    cout << "Person 2 Information:" << endl;
    person2.display(); // Output: Name, Age, Height of person2
    cout << endl;

    // ---------------- Accessing Members ----------------

    cout << "Person 1's name is: " << person1.name << endl;
    cout << "Person 2's age is: " << person2.age << endl;
    cout << endl;

    // ---------------- Pointers to Structures ----------------

    Person *ptrPerson = &person1;
    cout << "Pointer accessing Person 1's name: " << ptrPerson->name << endl;
    cout << "Pointer accessing Person 1's age: " << ptrPerson->age << endl;
    cout << endl;

    // ---------------- Arrays of Structures ----------------

    Person people[3] = {
        {"Charlie", 22, 1.85},
        {"David", 28, 1.78},
        {"Eva", 26, 1.65}};

    cout << "Array of People Information:" << endl;
    for (int i = 0; i < 3; ++i)
    {
        people[i].display();
        cout << endl;
    }

    // ---------------- Passing Structures to Functions ----------------

    displayPerson(person1);
    displayPerson(person2);

    // ---------------- Returning Structures from Functions ----------------

    Person person3 = createPerson("Fay", 31, 1.70);

    cout << "New Person created:" << endl;
    displayPerson(person3);
    cout << endl;

    return 0;
}