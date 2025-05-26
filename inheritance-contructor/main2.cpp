#include <iostream>
using namespace std;

class attribut
{
public:
    attribut(int i) : n_(i)
    {
        cout << "attribut(" << n_ << ")\n";
    }
    ~attribut()
    {
        cout << "~attribut(" << n_ << ")\n";
    }

private:
    int n_;
};


class base
{
public:
    base() : att_(1)
    {
        cout << "base()\n";
    };
    ~base()
    {
        cout << "~base()\n";
    };

private:
    attribut att_;
};


class derived : public base
{
public:
    derived() : att_(2)
    {
        cout << "derived()\n";
    };
    ~derived()
    {
        cout << "~derived()\n";
    };

private:
    attribut att_;
};


int main()
{
    derived d;
}
