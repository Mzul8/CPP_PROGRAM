#include <iostream>
using namespace std;

int main(){
	float nilai;
	
	cout << "Masukkan nilai: ";
	cin >> nilai;
	
	if(nilai >= 70){
		cout << "Selamat Anda Lulus";
	} else if(nilai <= 70){
		cout << "Maaf Anda Tidak Lulus";
	}
	
	
	return 0;
}
