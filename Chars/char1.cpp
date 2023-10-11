#include <iostream>
using namespace std;
int program_1(char x){
    if(x >= 'A' && x <= 'Z'){
        return 1;
    }
    else if(x >= 'a' && x <= 'z'){
        return -1;
    }
    else{
        return 0;
    }
}
int program_2(char x){
    int e = program_1(x);
    if (e == 1 || e == -1) return 1;
    else if (e >= 0 && e <= 9) return -1;
    else return 0;
}
void program_3(char x){
   if(int(x) > 65 && int(x) < 90 || int(x) > 97 && int(x) < 122){
    cout << char(x + 1);
   }
   else if(int(x) > 48 && int(x) < 57){
    cout << char(x + 1);
   }
   else cout << x;
}
int main(){
    char x;
 std::cout << "Nhap ki tu don: ";cin >> x;
 std::cout << "Ket qua 1: " << program_1(x) << "\n";
 std::cout << "Ket qua 2: " << program_2(x) << "\n";
program_3(x);
 }