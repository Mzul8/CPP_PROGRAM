#include <iostream>
#include <math.h>

using namespace std;

int main(){
	int nilai, pangkat;
	
	cout << "Masukkan nilai: ";
	cin >> nilai;
	
	cout << "Masukkan nilai pangkat: ";
	cin >> pangkat;

    cout << "Hasil dari: " << nilai << " pangkat " << pangkat << " = " << pow(nilai, pangkat);
    return 0;
}
