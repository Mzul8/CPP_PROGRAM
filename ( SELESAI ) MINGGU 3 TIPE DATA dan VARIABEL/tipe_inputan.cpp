#include <iostream>
#include <typeinfo>
using namespace std;


int main(){
	
	string angka;
	
	cout << "Masukkan nilai kedalam variabel angka: ";
	cin >> angka;
	
	cout << "type: " << typeid(angka).name() << " Tipe yang anda masukkan adalah string";
	
	return 0;
}
