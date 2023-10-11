#include <iostream>
#include <cmath>
using namespace std;

float program_1(int a[], int length) {
    float sum = 0;
    int dem = 0;
    for (int i = 0; i < length; i++) {
        if (i % 2 == 0) {
            dem++;
            sum += a[i];
        }
    }
    float avg = sum / dem;
    return avg;
}

float program_2(int a[], int length) {
    float sum = 0;
    int dem = 0;
    for (int i = 0; i < length; i++) {
        if (i % 2 != 0) {
            if (a[i] % 2 != 0) {
                dem++;
                sum += a[i];
            }
        }
    }
    float avg = sum / dem;
    return avg;
}

int program_3(int a[], int length) {
    int max = a[0];
    for (int i = 0; i < length; i++) {
        if (a[i] > max) {
            max = a[i];
        }
    }
    return max;
}

int program_4(int a[], int length) {
    int min = a[0];
    for (int i = 0; i < length; i++) {
        if (a[i] < min) {
            min = a[i];
        }
    }
    return min;
}

int program_5(int a[], int length) {
    int dem = 0;
    for (int i = 0; i < length; i++) {
        int sqrtvalue = sqrt(a[i]);
        if (sqrtvalue * sqrtvalue == a[i]) {
            dem++;
        }
    }
    return dem;
}

bool isPrime(int num) {
    if (num < 2) {
        return false;
    }

    int sqrtValue = sqrt(num);
    for (int i = 2; i <= sqrtValue; i++) {
        if (num % i == 0) {
            return false;
        }
    }

    return true;
}

int program_6(int a[], int length) {
    int sum = 0;
    for(int i = 0; i < length; i++){
        if(isPrime(a[i])){
            sum += a[i];
        }
    }
    return sum;
}
void program_7(int a[], int length){
    for(int i = length - 1; i >= 0; i--){
        for(int j = 0; j < length; j++){
            if(a[j] > a[j + 1]){
                int tmp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = tmp;
            }
        }
    }
    for(int i = 0; i < length; i++){
        cout << a[i] << " ";
    }
}

int main() {
    const int MAX = 1000;
    int a[MAX];
    cout << "Nhap so luong phan tu: ";
    int n;
    cin >> n;

    cout << "Nhap lien tiep " << n << " gia tri: ";
    for (int i = 0; i < n; i++)
        cin >> a[i];

    cout << "Ket qua 1: " << program_1(a, n) << endl;
    cout << "Ket qua 2: " << program_2(a, n) << endl;
    cout << "Ket qua 3: " << program_3(a, n) << endl;
    cout << "Ket qua 4: " << program_4(a, n) << endl;
    cout << "Ket qua 5: " << program_5(a, n) << endl;
    cout << "Ket qua 6: " << program_6(a, n) << endl;
    program_7(a, n);
    return 0;
}