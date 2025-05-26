#include <iostream>
#include <bitset>
#include <limits>

constexpr int iterations = 8;

int main() {
    int a = std::numeric_limits<int>::max()/2 - 2;
    int b = std::numeric_limits<int>::max()/2 - 2;

    for (int i = 0; i < iterations; ++i) {
        // Convert integers to 32-bit binary strings
        std::bitset<32> binA(a);
        std::bitset<32> binB(b);
        std::bitset<32> binAB(a+b);

        std::cout << "Iteration " << i + 1 << ":\n";
        std::cout << "a\t= " << a << "\t\t(" << binA << ")\n";
        std::cout << "b\t= " << b << "\t\t(" << binB << ")\n";
        std::cout << "Sum\t= " << a + b << "\t\t(" << binAB << ")\n";
        std::cout << "---------------------------\n";

        ++a;
    }

    std::cout << "\n\n\n";

    unsigned int c = std::numeric_limits<unsigned int>::max()/2 - 2;
    unsigned int d = std::numeric_limits<unsigned int>::max()/2 - 2;

    for (int i = 0; i < iterations; ++i) {
        std::bitset<32> binC(c);
        std::bitset<32> binD(d);
        std::bitset<32> binCD(c+d);

        std::cout << "Iteration " << i + 1 << ":\n";
        std::cout << "a\t= " << c << "\t\t(" << binC << ")\n";
        std::cout << "b\t= " << d << "\t\t(" << binD << ")\n";
        std::cout << "Sum\t= " << c + d << "\t\t(" << binCD << ")\n";
        std::cout << "---------------------------\n";

        ++c;
    }

    return 0;
}
