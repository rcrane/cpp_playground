#include <iostream>

int main() {
    int a = 10;
    int* p = &a; // Adresse von a holen, in p speichern

    std::cout << p << std::endl;  // Ausgabe der Adresse
    std::cout << *p << std::endl; // Ausgabe: 10

    *p = 20; // Ändert den Wert von a
    //p += 20;  Ändert die Adresse auf die p zeigt!

    std::cout << *p << std::endl; // Ausgabe: 20
    std::cout << a << std::endl; // Ausgabe: 20

    // p += 20;
    // std::cout << *p << std::endl;
    // p zeigt nun auf eine andere Adresse, die u.U. nicht gültig ist
    // std::cout << a << std::endl; // a existiert immer noch, aber p zeigt auf eine andere Adresse

    // Beispiel: Pointer und Array
    int arr[5] = {1, 2, 3, 4, 5};
    int* ptr = arr; // Zeigt auf das erste Element des Arrays

    std::cout << "Array mit Pointer und Schleife ausgeben:" << std::endl;
    for (int i = 0; i < 5; ++i) {
        std::cout << *(ptr + i) << " "; // Zugriff auf Array-Elemente über Pointer-Arithmetik
    }
    std::cout << std::endl;

    // Beispiel: Pointer auf Pointer
    int** pp = &p;
    std::cout << "Wert von a über Pointer auf Pointer: " << **pp << std::endl;

    // Beispiel: Pointer und const
    const int b = 42;
    const int* pc = &b; // Pointer auf const int
    std::cout << "Wert von b über Pointer auf const int: " << *pc << std::endl;
}

