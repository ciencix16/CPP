#include <iostream>
#include <cstring>
using namespace std;
const int maxLength = 100;

// Function to input the full name
void inputFullName(char fullName[])
{
    std::cout << "Enter first name and last name (e.g., 'Mariusz Pudzianowski'): ";
    std::cin.getline(fullName, maxLength);
}

// Function to input the middle name
void inputMiddleName(char middleName[])
{
    std::cout << "Enter middle name: ";
    std::cin.getline(middleName, maxLength);
}

// Function to insert middle name into the full name
void insertMiddleName(char fullName[], char middleName[])
{
    // Find the position to insert the middle name (after the first name)
    char *insertPos = std::strchr(fullName, ' ');
    if (insertPos != nullptr)
    {
        // Calculate the size needed for the resulting string
        size_t resultLength = std::strlen(fullName) + std::strlen(middleName) + 2; // 2 for space and null terminator

        // Allocate memory for the result
        char *result = new char[resultLength];

        // Copy the first part of the full name
        std::strncpy(result, fullName, insertPos - fullName);
        result[insertPos - fullName] = '\0'; // Null-terminate the copied part

        // Concatenate the middle name
        std::strcat(result, " ");
        std::strcat(result, middleName);

        // Concatenate the last part of the full name
        std::strcat(result, insertPos);

        std::cout << "Full name with middle name: " << result << std::endl;

        // Clean up memory
        delete[] result;
    }
    else
    {
        std::cout << "Invalid full name format. Please enter first name and last name separated by space." << std::endl;
    }
}

int main()
{
    char fullName[maxLength], middleName[maxLength];

    // Input the full name
    inputFullName(fullName);

    // Input the middle name
    inputMiddleName(middleName);

    // Insert middle name into the full name and display the result
    insertMiddleName(fullName, middleName);

    return 0;
}