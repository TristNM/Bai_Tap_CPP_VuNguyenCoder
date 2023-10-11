




int main(){
int a1[1000];
int a2[1000];
int length_a = 0;
cout << "Nhap so luong phan tu: "; cin >> length_a;
cout << "Nhap lien tiep " << length_a << " gia tri cho a1: ";
for(int i = 0; i < length_a; i++) cin >> a1[i];
cout << "Nhap lien tiep " << length_a << " gia tri cho a2: ";
for(int i = 0; i < length_a; i++) cin >> a2[i];
{
cout << "Ket qua 1: "; program_1(a1, a2, length_a);
cout << "Ket qua 2: " << program_2(a1, a2, length_a) << "%\n";
cout << "Ket qua 3: "
<< (program_3(a1, a2, length_a) ? "True" : "False") << "\n";
}
cout << "Ket qua 4: ";
int b[1000];
int length_b = 0;
program_4(a1, a2, length_a, b, length_b);
for(int i = 0; i < length_b; i++) cout << b[i] << " ";
}