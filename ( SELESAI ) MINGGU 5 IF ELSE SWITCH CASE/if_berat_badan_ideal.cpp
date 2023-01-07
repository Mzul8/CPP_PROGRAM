#include <iostream>
using namespace std;

int main(){
	
	int berat, tinggi, tinggibadan;
	
	cout << "Masukkan berat: ";cin >> berat;
    cout << "Masukkan tinggi: ";cin >> tinggi;
	
    tinggibadan = tinggi - 110;
	if(berat == tinggibadan){
		cout << "berat badan ideal";
	} else if(berat < tinggibadan) {
		cout << "berat badan kurus";
	} else if(berat > tinggibadan) {
		cout << "berat badan gemuk";
	}
    
	return 0;
}
