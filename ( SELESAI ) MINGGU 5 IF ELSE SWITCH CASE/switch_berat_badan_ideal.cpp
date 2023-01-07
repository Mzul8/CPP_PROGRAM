#include <iostream>
using namespace std;

int main(){
	
	int berat, tinggi, tinggibadan, ideal;
	
	cout << "Masukkan berat: ";cin >> berat;
    cout << "Masukkan tinggi: ";cin >> tinggi;

    tinggibadan = tinggi - 110;
	if(berat == tinggibadan){
		ideal = 1;
	} else if(berat < tinggibadan) {
		ideal = 2;
	} else if(berat > tinggibadan) {
		ideal = 3;
	}

    switch (ideal) {
        case 1: 
            cout << "berat badan ideal";
        break;

        case 2:
            cout << "berat badan kurus";
        break;

         case 3:
            cout << "berat badan gemuk";
        break;
    }
	
	return 0;
}
