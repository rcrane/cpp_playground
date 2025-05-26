#include <iostream>
using namespace std;

int main()
{
    int i = 0;
    for (i = 1; i <= 5; i++)
    {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    i = 1;
    while (i <= 5)
    {
        std::cout << i << " ";
        i++;
    }
    std::cout << std::endl;

    i = 1;
    do
    {
        std::cout << i << " ";
        i++;
    }while (i <= 5);

    std::cout << std::endl;

}
