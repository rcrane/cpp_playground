#include <iostream>
#include <string>

int main(){

    std::string name;
    std::cout << "Name eingeben: ";
    std::getline(std::cin, name);

    int len = name.length();

    for(int i = 0; i <= len+10; i++){
        std::cout << "*";
    }

    std::cout << std::endl;
    std::cout << "* Hallo " << name << "! *" <<std::endl;

    for(int i = 0; i <= len+10; i++){
        std::cout << "*";
    }
    std::cout << std::endl;

}