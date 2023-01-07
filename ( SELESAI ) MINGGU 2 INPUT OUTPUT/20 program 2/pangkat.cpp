#include <iostream>
#include <math.h>
using namespace std;

int main(){
	int angka, pangkat;
	
	cout << "Masukkan angka dan pangkat: \n";
	cin >> angka >> pangkat;
	cout << angka << " ^ " << pangkat << " = " << pow(angka,pangkat);
		
	return 0;
}
