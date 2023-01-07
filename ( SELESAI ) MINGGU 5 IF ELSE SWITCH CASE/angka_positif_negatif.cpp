#include <iostream>
using namespace std;

main(){
    int angka;
	
	cout << "Masukkan angka: ";
	cin >> angka;
	
	if(angka > 0){
		cout << angka << " adalah " << "angka positif";
	} else if( angka <= 0) {
		cout << angka << " adalah " << "angka negatif";
	}
	
	return 0;   
}