#include <iostream>

int main()
{
    // Pattern A
    for (int i = 1; i <= 10; ++i) {
        for (int j = 0; j < i; ++j) {
            std::cout << "+";
        }
        std::cout << "\n";
    }

    std::cout << "\n"; // Space between patterns

    // Pattern B
    for (int i = 10; i >= 1; --i) {
        for (int j = 0; j < i; ++j) {
            std::cout << "+";
        }
        std::cout << "\n";
    }

    return 0;
}