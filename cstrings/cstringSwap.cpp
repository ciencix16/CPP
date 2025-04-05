#include <iostream>
#include <cstring>

int main()
{
    const int max_length = 100;
    char first[max_length], second[max_length];
    char mixed1[max_length], mixed2[max_length];

    // Input
    std::cout << "Podaj pierwszy dwuczłonowy napis: ";
    std::cin.getline(first, max_length);

    std::cout << "Podaj drugi dwuczłonowy napis: ";
    std::cin.getline(second, max_length);

    // Find space in first and second string
    char *space_first = std::strchr(first, ' ');
    char *space_second = std::strchr(second, ' ');

    if (!space_first || !space_second)
    {
        std::cerr << "Oba napisy muszą zawierać spację.\n";
        return 1;
    }

    // Split first into head1 and tail1
    int head1_len = space_first - first;
    char head1[max_length], tail1[max_length];
    std::strncpy(head1, first, head1_len);
    head1[head1_len] = '\0'; // null-terminate
    std::strcpy(tail1, space_first + 1);

    // Split second into head2 and tail2
    int head2_len = space_second - second;
    char head2[max_length], tail2[max_length];
    std::strncpy(head2, second, head2_len);
    head2[head2_len] = '\0';
    std::strcpy(tail2, space_second + 1);

    // Create mixed strings
    std::snprintf(mixed1, max_length, "%s %s", head1, tail2);
    std::snprintf(mixed2, max_length, "%s %s", head2, tail1);

    // Output results
    std::cout << "Mixed 1: " << mixed1 << std::endl;
    std::cout << "Mixed 2: " << mixed2 << std::endl;

    return 0;
}