#include <iostream>

int main(){

    constexpr unsigned int x = 2;
    constexpr unsigned int y = 4;

    std::cout << "    | ";
    for(int i = x; i <= y; i++){
        std::cout << i << " ";
    }
    std::cout << std::endl << "----+-----------" << std::endl;

    for(int i = x; i <= y; i++){
        std::cout << i << " | ";
        for(int g = x; g <= y; g++){
            std::cout << i*g << " ";
        }
        std::cout << std::endl;

    }
}