#include <iostream>
using namespace std;

int main(){
	int angka, i;
	bool hasil = true;
	
	cout << "Masukkan angka: ";
	cin >> angka;
	
	for(i = 2; i <= angka / 2; i++){
		cout << i << "\n";
		
		if(angka % i == 0){
			hasil = false;
		}
	}
	
	if(hasil){
		cout << " Bilangan Prima";
	} else {
		cout << " Bukan Bilangan Prima";
	}
	
	return 0;
}
