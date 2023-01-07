#include <iostream>
using namespace std;

int main(){
	int i, angka;
	
	cout << "Masukkan deret terahir angka: ";
	cin >> angka;
	
	for(i = 1; i <= angka; i++){
		cout << i << "\t";
	}
	
	return 0;
}
