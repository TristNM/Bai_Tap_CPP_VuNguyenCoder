#include <iostream>
using namespace std;
float program_1(float a, float b, float c){
    return (a*b*c);
}
 float program_2(float a, float b, float c){
    return (2*(a*b+b*c+a*c));
}
 float program_3(float a, float b, float c){
    return (a+b)*2*c+2*a*b;
}
 float program_4(float a, float b, float c){
    return 4 * (a + b + c);
}

int main(){
    float a, b, h;
    std::cout << "Nhap lan luot a, b, h: ";
    std::cin >> a >> b >> h;
    std::cout << "Ket qua 1 - The tich: " << program_1(a, b, h) << "\n";
    std::cout << "Ket qua 2 - Dien tich xung quanh: " << program_2(a, b, h) << "\n";
    std::cout << "Ket qua 3 - Dien tich toan phan: " << program_3(a, b, h) << "\n";
    std::cout << "Ket qua 4 - Chu vi: " << program_4(a, b, h) << "\n";
    return 0;
}