#include <iostream>
#include <string>
using namespace std;
int main(){
    string name = "Nguyen Minh Triet";
    name.replace(12, 5, "Thu");
    cout << name;
}