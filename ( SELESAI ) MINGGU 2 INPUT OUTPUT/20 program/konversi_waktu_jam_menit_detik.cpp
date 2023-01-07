#include <iostream>
using namespace std;

int main(){
	int waktu, menit, detik;
	
	cout << "Masukkan satuan waktu(jam) " ;
	cin >> waktu;
	
	menit = waktu * 60;
	detik = menit * 60;
	
	cout << "Hasil: \n" << waktu << " jam" << "\n" << menit << " menit"<< "\n" << detik << " detik";
	
	return 0;
}
