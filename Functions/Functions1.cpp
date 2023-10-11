#include <iostream>
#include <math.h>
using namespace std;
float average(float a, float b, float c){
    float avg = (a + b + c)/3;
    return avg;
}
int Max_number(float a, float b, float c){
    int max = a;
    if(b > a){
        return b;
    }
    else if(c > a){
        return c;
    }
    else{
        return a;
    }
}

int main(){
    float a, b, c;
    cin >> a >> b >> c;
    cout << "Ket qua 1: " << average(a, b, c) << "\n";
    cout << "Ket qua 2: " << Max_number(a, b, c) << "\n";
return 0;

}