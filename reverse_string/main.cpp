#include <algorithm>
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string v("123");
    string destination(v.length(), ' ');
    cout << v << endl;
    cout << destination << endl;
    reverse_copy(begin(v),
    end(v), begin(destination));
    cout << destination << endl;
}
