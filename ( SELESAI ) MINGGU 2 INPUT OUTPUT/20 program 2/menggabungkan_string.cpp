#include <iostream>
using namespace std;

int main(){
	string k1, k2, hasil;
	
	cout << "Masukkan kata 1: ";
	getline(cin, k1);
	
	cout << "Masukkan kata 2: ";
	getline(cin, k2);
	
	hasil = k1 + k2;
	cout << "Hasil : " << hasil ;	
	return 0;
}
