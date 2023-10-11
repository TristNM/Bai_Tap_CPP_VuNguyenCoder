/******************************************************************************
************ Bài tập lập trình C++ cơ bản - Bài 8.3 ***************************
********************** vunguyencoder.com **************************************

[Đề bài] Viết các hàm kiem_tra(...) để in ra được kết quả như sau:
0 :     Day la so 0
5 :     Day la so nguyen duong
-5 :    Day la so nguyen am
5.5 :   Day la so thuc duong
-5.5 :  Day la so thuc am
-5.0 :  Day la so nguyen am
nam :   Day la chuoi ki tu

*******************************************************************************/

#include <iostream>

using namespace std;

    void kiem_tra(float a){
        if(a == 0){
            cout << "Day la so 0" << endl;
        }
        if(a > 0){
            if(a - int(a) == 0){
                cout << "Day la so nguyen duong" << endl;
            }
            else{
                cout << "Day la so nguyen am" << endl;
            }
        }
        if(a < 0){
            if(a - int(a) == 0){
                cout << "Day la so thuc duong" << endl;
            }
            else{
                cout << "Day la so thuc am" << endl;
            }
        }
    }
    void kiem_tra(string n){
        cout << "Day la chuoi ky tu" << endl;
    }

int main()
{
    // Phần test 
	cout << "0\t: "; 	kiem_tra(0);
	cout << "5\t: "; 	kiem_tra(5);
	cout << "-5\t: "; 	kiem_tra(-5);
	cout << "5.5\t: "; 	kiem_tra(5.5);
	cout << "-5.5\t: "; kiem_tra(-5.5);
	cout << "-5.0\t: "; kiem_tra(-5.0);
	cout << "nam\t: "; 	kiem_tra("nam");
    return 0;
}







