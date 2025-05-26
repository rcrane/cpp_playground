#include <iostream>

using namespace std;

class attribut
{
public:
    attribut(int i)
    {
        cout << "attribut(" << i << ")\n";
    }
};

class base
{
public:
    base() : attribut_(1)
    {
        cout << "base()\n";
    }

private:
    attribut attribut_;
};


class derived : public base
{
public:
    derived() : attribut_(2), base()
    {
        cout << "derived()\n";
    }

private:
    attribut attribut_;
};

int main()
{
    derived d;
}
