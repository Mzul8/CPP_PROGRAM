#include <iostream>
using namespace std;

int main(){
	
	int angka;
	
	cout << "Masukkan angka: ";
	cin >> angka;
	
	if(angka%2 == 0){
		cout << angka << " adalah " << "bilangan genap";
	} else {
		cout << angka << " adalah " << "bilangan ganjil";
	}
	
	return 0;
}
