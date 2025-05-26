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

int main(){
    int numbers[] = {1, 3, 5, 7, 9, 10, 2, 4, 8};
    int result = max_number(numbers, std::size(numbers));
    std::cout << result << std::endl;
}