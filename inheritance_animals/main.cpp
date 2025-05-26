#include <iostream>
#include <string>

class Animal {
public:
  // **Member initializer list:**
  // `: name(n)`
  // Initialisiert die Member-Variable `name` mit dem Wert von `n`, bevor der Konstruktor-Body ausgeführt wird.
  void Animal(const std::string &n) : name(n) {
    std::cout << "Animal constructor called for " << name << std::endl;
  }

  // Der Destruktor der Basisklasse sollte als `virtual` deklariert werden,
  // wann immer Objekte abgeleiteter Klassen über einen Zeiger auf die
  // gelöscht werden (Zeile 110).
  // Dies stellt sicher, dass der Destruktor der abgeleiteten Klasse aufgerufen
  // wird und eine ordnungsgemäße Freigabe von Ressourcen erfolgt.
  virtual ~Animal() {
    std::cout << "Animal destructor called for " << name << std::endl;
  }

  std::string getName() const {
    return name;
  }

  void setName(const std::string &n) {
    name = n;
  }

  virtual void makeSound() const {
    std::cout << name << " makes a sound." << std::endl;
  }

  virtual void move() const {
    std::cout << name << " moves somehow." << std::endl;
  }

private:
  std::string name;
};

class Cat : public Animal {
public:
  Cat(const std::string &n) : Animal(n) {
    std::cout << "Cat constructor called for " << getName() << std::endl;
  }
  ~Cat() override {
    std::cout << "Cat destructor called for " << getName() << std::endl;
  }
  void makeSound() const override {
    std::cout << getName() << " says: Meow!" << std::endl;
  }
};

class Dog : public Animal {
public:
  Dog(const std::string &n) : Animal(n) {
    std::cout << "Dog constructor called for " << getName() << std::endl;
  }

  // Das Wort `override` sollte zu einem Destruktor hinzugefügt werden,
  // wenn der Destruktor der Basisklasse als `virtual` deklariert ist
  // und Sie ihn in einer abgeleiteten Klasse überschreiben.
  // Es macht deutlich, dass der Destruktor der abgeleiteten Klasse
  // einen virtuellen Destruktor der Basisklasse überschreiben soll.
  // Es ist nicht zwingend erforderlich, aber es ist gute Praxis
  // für Klarheit und um Fehler zu vermeiden.
  ~Dog() override {
    std::cout << "Dog destructor called for " << getName() << std::endl;
  }

  void makeSound() const override {
    std::cout << getName() << " says: Woof!" << std::endl;
  }
};

class Mouse : public Animal {
public:
  Mouse(const std::string &n) : Animal(n) {
    std::cout << "Mouse constructor called for " << getName() << std::endl;
  }

  ~Mouse() override {
    std::cout << "Mouse destructor called for " << getName() << std::endl;
  }

  // void makeSound() not implemented on purpose
};

// Task: Create a class `Bird` that inherits from `Animal`
// and implements the `makeSound` method to print that the bird sings.
// class Bird

int main() {
  // Creating objects of derived classes
  Animal *a1 = new Cat("Whiskers");
  Animal *a2 = new Dog("Buddy");
  Animal *a3 = new Mouse("Mini");
  // Construct a bird here

  // Demonstrating polymorphism
  a1->makeSound();
  a2->makeSound();
  a3->makeSound();
  // Let the bird sing here

  // Without virtual destructor, only the base class destructor will be called
  // and the derived class destructor will not be called, leading to resource
  // leaks.
  delete a1;
  delete a2;
  delete a3;
  // Don't forget the bird here

  return 0;
}