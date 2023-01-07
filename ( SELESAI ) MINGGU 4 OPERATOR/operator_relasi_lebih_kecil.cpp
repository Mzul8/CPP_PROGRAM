#include <iostream>
using namespace std;

int main(){
	int a,b;
	bool hasil;
	
	cout << "Operator relasi < / lebih kecil dari\n";
	
	cout << "Masukkan 2 nilai untuk 2 variabel: \n";
	cin >> a >> b;	
	hasil = a < b;
	
	cout << "\n(1) untuk true (0) untuk false\n"; 
	cout << "Hasil nilai: " << hasil ;
	return 0;
}
