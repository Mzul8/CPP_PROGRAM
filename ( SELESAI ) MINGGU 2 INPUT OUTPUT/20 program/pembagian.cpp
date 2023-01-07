#include <iostream>
using namespace std;

int main(){
    int angka1, angka2;
	float hasil;
	
    cout << "Masukkan Nilai ke-1 ";
    cin >> angka1;

    cout << "Masukkan Nilai ke-2 ";
    cin >> angka2;
    
    hasil = angka1 / angka2;
    
	cout << "Hasil pembagian " << angka1 << " / " << angka2 << " = " << hasil;
    
	return 0;
}
