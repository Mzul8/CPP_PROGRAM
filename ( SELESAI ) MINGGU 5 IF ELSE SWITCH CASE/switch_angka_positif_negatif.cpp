#include <iostream>
using namespace std;

main(){
    int angka;
	
	cout << "Masukkan angka: ";
	cin >> angka;
	
	switch(angka > 0){
        case true:
		    cout << angka << " adalah " << "angka positif";
        break; 
        default:     
		    cout << angka << " adalah " << "angka negatif";
        break;
	} 
	
	return 0;   
}