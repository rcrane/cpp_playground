#include <ctime>
#include <iostream>
#pragma warning(disable : 4996)

class date
{
public:
    void init();
    void init(int, int, int);
    void print();

private:
    int day_;
    int month_;
    int year_;
};

void date::init()
{
    std::time_t timer = std::time(0);
    std::tm *tblock = std::localtime(&timer);
    day_ = tblock->tm_mday;
    month_ = tblock->tm_mon + 1;
    year_ = tblock->tm_year + 1900;
}

void date::init(int d, int m, int y)
{
    day_ = d;
    month_ = m;
    year_ = y;
}

void date::print()
{
    std::cout << day_ << '.' << month_ << '.' << year_ << std::endl;
}

int main()
{
    date d1;               // ein Datums-Objekt wird erzeugt
    date d2, d3, d4;       // zwei Datums-Objekte werden erzeugt
    d1.init(29, 11, 2004); // d1 wird mit dem 29.11.2004 initialisiert
    d2.init(10, 5, 1999);  // d2 wird mit dem 10.05.1999 initialisiert
    d3.init(5, 1, 2005);   // d3 wird mit dem 05.01.2005 initialisiert
    d4.init();
    d1.print(); // => 29.11.2004
    d2.print(); // => 10.05.1999
    d3.print(); // => 05.01.2005
    d4.print();
}
