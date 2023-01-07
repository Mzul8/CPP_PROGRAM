#include <iostream>
using namespace std;

int main(){

	string tempat_tanggal_lahir, nama;
	
	
	cout << "Masukkan nama anda: ";
	getline(cin, nama);
	
	cout << "Masukkan tempat lahir anda: ";
	getline(cin, tempat_tanggal_lahir);

	cout << "\nNama anda: " << nama << "\nTempat lahir: " << tempat_lahir;
	
	return 0;
}
