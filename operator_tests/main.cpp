#include <iostream>
using namespace std;

void test1(){
    int numbers[] = { 0, 5, 15, 25, 45, 65, 85, 100 };
    int cur_nmb = numbers[1];
    cout << cur_nmb << endl;
    cur_nmb += (cur_nmb = numbers[2]);
    cout << cur_nmb << endl;
    cur_nmb %= 3;
    int new_nmb = --numbers[--cur_nmb + 2];
    cout << new_nmb - cur_nmb << endl;
}

void test2(){
    int n1 = 2;
    int n2 = 4;
    long n3 = 6;
    long n4 = 8;
    n1 = (-1 * n3++ - ++n4);
    cout << n1 << endl;
    int n5 = --n2 - --n3 - n4 % n2;
    cout << n5 << endl;
    bool test = !(++n1 == n2 && 1 == 1 && n3 + 2 == n4);
    cout << test << endl;
}



int main(){
    test1();
    test2();
}
