#include <iostream>

int main() {
    int i = 5;

    std::cout << "Initial value of i: " << i << "\n\n";

    // Post-increment: value is used *before* increment
    int a = i++;
    std::cout << "After 'a = i++':\n";
    std::cout << "a = " << a << " (i was used before incrementing)\n";
    std::cout << "i = " << i << " (i has been incremented after assignment)\n\n";

    // Reset i for clarity
    i = 5;

    // Pre-increment: value is incremented *before* being used
    int b = ++i;
    std::cout << "After 'b = ++i':\n";
    std::cout << "b = " << b << " (i was incremented before being used)\n";
    std::cout << "i = " << i << " (i is incremented before assignment)\n";

    return 0;
}
