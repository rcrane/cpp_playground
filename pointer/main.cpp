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
}

