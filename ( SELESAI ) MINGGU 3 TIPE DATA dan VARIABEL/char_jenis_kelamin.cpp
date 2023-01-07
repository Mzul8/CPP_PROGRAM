#include <iostream>
using namespace std;

int main(){
	
	char jeniskelamin;
	
	cout << "Masukkan jenis kelamin anda[L/P]: ";
	cin >> jeniskelamin;
	
    if(jeniskelamin == 'L'){
        cout << "jenis kelamin anda: laki-lali" ;
    } else if (jeniskelamin == 'P') {
        cout << "jenis kelamin anda: perempuan" ;
    } 
	
	return 0;
}
