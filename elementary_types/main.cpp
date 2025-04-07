#include <iostream>
#include <limits> // Für Wertebereiche

int main()
{
    // Ganzzahlige Datentypen
    char zeichen = 'A';
    int zahl = 42;
    unsigned int positiveZahl = 100;
    long grosseZahl = 1000000L;

    // Gleitkommazahlen
    float gleitkommaZahl = 3.14f;
    double praeziseZahl = 2.718281828;

    // Boolescher Typ
    bool wahrheitswert = true;

    // Definiere eine Variable vom Typ int
    int a = std::numeric_limits<int>::max(); // Setze a auf den maximalen Wert von int
    int b = 1;                               // Eine weitere Zahl, die wir hinzufügen möchten

    // Ausgabe der Werte
    std::cout << "Char: " << zeichen << " (" << sizeof(zeichen) << " Byte)\n";
    std::cout << "Int: " << zahl << " (" << sizeof(zahl) << " Byte)\n";
    std::cout << "Unsigned Int: " << positiveZahl << " (" << sizeof(positiveZahl) << " Byte)\n";
    std::cout << "Long: " << grosseZahl << " (" << sizeof(grosseZahl) << " Byte)\n";
    std::cout << "Float: " << gleitkommaZahl << " (" << sizeof(gleitkommaZahl) << " Byte)\n";
    std::cout << "Double: " << praeziseZahl << " (" << sizeof(praeziseZahl) << " Byte)\n";
    std::cout << "Bool: " << wahrheitswert << " (" << sizeof(wahrheitswert) << " Byte)\n";

    // Wertebereiche anzeigen
    std::cout << "\nWertebereich von int: "
              << std::numeric_limits<int>::min()
              << " bis "
              << std::numeric_limits<int>::max()
              << "\n";

    // Berechne die Summe
    int summe = a + b; // Hier tritt der Überlauf auf

    // Ausgabe der Werte
    std::cout << "Wert von a: " << a << std::endl;
    std::cout << "Wert von b: " << b << std::endl;
    std::cout << "Summe (mit Überlauf): " << summe << std::endl;

    return 0;
}
