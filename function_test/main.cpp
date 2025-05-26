#include <iostream>

int max_number(int my_array[], int size){
    // Speichere die groesste Zahl aus my_array in found_nbr ab
    // Nutze eine Schleife
    int found_nbr = 0;
    for(int i = 0; i < size; i++){
        if(my_array[i] > found_nbr){
            found_nbr = my_array[i];
        }
    }

    return found_nbr;
}

int min(int a, int b){
    return a < b ? a : b;
}

void swap(int& eins, int& zwei){
    int drei = eins;
    eins = zwei;
    zwei = drei;
}

void swap(double& eins, double& zwei){
    double drei = eins;
    eins = zwei;
    zwei = drei;
}

void swap(auto& eins, auto& zwei){
    auto drei = eins;
    eins = zwei;
    zwei = drei;
}

int main(){
    // int numbers[] = {1, 3, 5, 7, 9, 10, 2, 4, 8};
    // int result = max_number(numbers, std::size(numbers));
    // std::cout << result << std::endl;

    int uno;
    int does;
    std::cout << "Ganze Zahl eingeben: ";
    std::cin >> uno;
    std::cout << "Ganze Zahl eingeben: ";
    std::cin >> does;

    std::cout << uno << " " << does << std::endl;
    swap(uno, does);
    std::cout << uno << " " << does << std::endl;

    double uno_d = 0.0;
    double does_d = 0.0;
    std::cout << "Dezimalzahl eingeben: ";
    std::cin >> uno_d;
    std::cout << "Dezimalzahl eingeben: ";
    std::cin >> does_d;

    std::cout << uno_d << " " << does_d << std::endl;
    swap(uno_d, does_d);
    std::cout << uno_d << " " << does_d << std::endl;


    double alpha_d = 0;
    int beta = 0;
    std::cout << "Dezimalzahl eingeben: ";
    std::cin >> alpha_d;
    std::cout << "Ganzahl eingeben: ";
    std::cin >> beta;

    std::cout << alpha_d << " " << beta << std::endl;
    swap(alpha_d, beta);
    std::cout << alpha_d << " " << beta << std::endl;

}