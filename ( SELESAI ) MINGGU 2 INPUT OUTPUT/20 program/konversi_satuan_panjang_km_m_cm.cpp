#include <iostream>
using namespace std;

int main(){
    float nilai, m, cm;

    cout << "Masukkan satuan nilai kilometer ";
    cin >> nilai;
	
	m = nilai * 1000;
	cm = m * 100;
	
	cout << "Hasil: \n" << nilai << " kilometer \n" << m << " meter \n" << cm << " centimeter \n";	

    return 0;
}
