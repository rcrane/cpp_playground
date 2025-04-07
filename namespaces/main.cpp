#include <iostream>

// Definition des ersten Namespace
namespace NS1
{
    void printHello()
    {
        std::cout << "Hello from NS1" << std::endl;
    }
}

// Definition des zweiten Namespace
namespace NS2
{
    void printHello()
    {
        std::cout << "Hello from NS2" << std::endl;
    }
}

int main()
{
    // Aufruf der Funktionen aus den Namespaces
    NS1::printHello(); // Verwendung des Scope-Operators ::
    NS2::printHello();

    return 0;
}
