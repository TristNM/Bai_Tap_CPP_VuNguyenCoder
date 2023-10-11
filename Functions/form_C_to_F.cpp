#include <iostream>
#include <cmath>
using namespace std;
float program(float c){   
    float f = (c * 9/5) + 32;
    return f;
}
    int main()
{
    std::cout << "Ket qua 1:\n";
    for(int i = 0; i <= 10; i++) {
        std::cout << "\t" << i << " (C) = " << program(i) << " (F)\n";
    }
    std::cout << "\nNhap do C: ";
    float celsius = 0;
    std::cin >>  celsius;
    std::cout << "Ket qua 2: " << program(celsius);
    return 0;
}
