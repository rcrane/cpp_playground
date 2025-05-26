#include <iostream>
using namespace std;
class A
{
public:
    A();            // <= Deklaration Konstruktor (1)
    A(int);         // <= Deklaration Konstruktor (2)
    A(double);      // <= Deklaration Konstruktor (3)
    A(int, double); // <= Deklaration Konstruktor (4)
    void print();

private:
    int n_;
    double d_;
};
A::A() // <= Definition Konstruktor (1)
{
    cout << "A::A()\n";
    n_ = 0;
    d_ = 0.0;
}
A::A(int n) // <= Definition Konstruktor (2)
{
    cout << "A::A(int " << n << ")\n";
    n_ = n;
    d_ = 0.0;
}
A::A(double d) // <= Definition Konstruktor (3)
{
    cout << "A::A(double " << d << ")\n";
    n_ = 0;
    d_ = d;
}
A::A(int n, double d) // <= Definition Konstruktor (4)
{
    cout << "A::A(int " << n << ", double " << d << ")\n";
    n_ = n;
    d_ = d;
}
void A::print()
{
    cout << "=> n:" << n_ << " - d:" << d_ << '\n';
}
int main()
{
    A a1;         // <= Nutzung Konstruktor (1)
    a1.print();   // => n:0 – d:0
    A a2(4);      // <= Nutzung Konstruktor (2)
    a2.print();   // => n:4 – d:0
    A a3(2.7);    // <= Nutzung Konstruktor (3)
    a3.print();   // => n:0 – d:2.7
    A a4(6, 3.1); // <= Nutzung Konstruktor (4)
    a4.print();   // => n:6 – d:3.1
}
