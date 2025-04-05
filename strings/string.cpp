#include <iostream>
#include <string>

int main()
{
    // Declaring and initializing strings
    std::string str1 = "Hello";
    std::string str2("World");
    std::string str3 = str1 + " " + str2; // Concatenation

    std::cout << "Concatenated string: " << str3 << std::endl;

    // Accessing characters
    std::cout << "First character: " << str3[0] << std::endl;

    // Modifying strings
    str3[0] = 'h';      // Changing character
    str3.append("!!!"); // Appending to the string
    std::cout << "Modified string: " << str3 << std::endl;

    // Getting string length
    std::cout << "Length of string: " << str3.length() << std::endl;

    // Finding substrings
    std::size_t pos = str3.find("World");
    if (pos != std::string::npos)
    {
        std::cout << "'World' found at position: " << pos << std::endl;
    }

    // Substring extraction
    std::string sub = str3.substr(6, 5);
    std::cout << "Extracted substring: " << sub << std::endl;

    // String comparison
    if (str1 == "Hello")
    {
        std::cout << "str1 is equal to 'Hello'" << std::endl;
    }

    // Converting string to C-style string
    const char *cstr = str3.c_str();
    std::cout << "C-style string: " << cstr << std::endl;

    return 0;
}