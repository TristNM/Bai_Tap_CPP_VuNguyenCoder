#include <iostream>
using namespace std;
int sum(int a[], int n){
    int solve = 0;
    solve = a[0] + a[n - 1];
    return solve;
}
void mid_sum(int a[], int n){
    if(n % 2 == 0){
        n = n / 2;
        cout << a[n - 1] << " " << a[n] << endl;
    }
    else{
        n = n / 2;
        cout << a[n] << endl;
    }
}
void Multiply(int a[], int n){
    int tong_chan = 0;
    int tong_le = 0;
    for(int i = 0; i < n; i++){
        if(a[i] % 2 == 0){
            tong_chan += a[i];
        }
        else{
            tong_le += a[i];
        }
    }
    cout << tong_chan * tong_le << endl;
}


int main(){
    const int length = 1000;
    int a[length];
    cout << "Nhap so luong phan tu: ";
    int n; cin >> n;
    cout << "Nhap lien tiep " << n << " gia tri: ";
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    cout << sum(a, n) << endl;
    mid_sum(a, n);
    Multiply(a, n);
}