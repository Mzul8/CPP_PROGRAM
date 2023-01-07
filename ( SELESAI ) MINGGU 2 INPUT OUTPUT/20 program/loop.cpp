#include <iostream>
using namespace std;

int main(){
	
	int berapa_kali;
	string ulangi_kata;
	
	cout << "Masukkan kata yang ingin diulangi: ";
	cin >> ulangi_kata;
	
	cout << "Berapa kali anda ingin mengulanginya? ";
	cin >> berapa_kali;
	
	for(int i = 1; i <= berapa_kali; i++){
		cout << ulangi_kata << endl;
	}
	
	return 0;
}
