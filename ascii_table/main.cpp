#include <iostream>

int main()
{
    std::cout << "Printable ASCII [32..126]:\n\n";

    // for (char c{' '}; c <= '~'; ++c)
    for (char c = 32; c <= 126; c++)
    {
        // std::cout << c << ' ';
        std::cout << c << ((c + 1) % 32 ? ' ' : '\n');
    }
    std::cout << "\n\n";
}
