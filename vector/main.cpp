#include <iostream>
#include <string>
#include <vector>

int main(){

    std::vector<std::string> names;
    std::string name;

    for(int d = 0; d < 3; d++){
        std::cout << "Namen eingeben: ";
        std::getline(std::cin, name);
        names.push_back(name);
    }

    int max_laenge = 0;
    for(std::string nme : names){
        if (nme.length() > max_laenge){
            max_laenge = nme.length();
        }
    }
    std::string line_one(max_laenge + 11, '*');
    std::cout << line_one << std::endl;

    for(std::string nme : names){
        std::string line("* Hallo ");
        line += nme;
        int extra_ws = max_laenge + 9 - line.length();
        std::string ws(extra_ws, ' ');
        std::cout << line << "!" << ws << "*" <<std::endl;
    }
    std::cout << line_one << std::endl;
    std::cout << std::endl;

}