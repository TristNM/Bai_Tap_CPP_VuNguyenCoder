#include <iostream>
using namespace std;
int main(){
    int a[5];
    for(int& x : a){
        cin >> x;
    }
    cout << "Ket qua 1: " <<" \n";
    for(int x : a){
        cout << x << "\n";
    }
    cout << "Ket qua 2: ";
    for(int x : a){
        cout << x << ", ";
    }
    cout << "Ket qua 3: ";
    for(int x : a){
        cout << x << " "; 
    }
}