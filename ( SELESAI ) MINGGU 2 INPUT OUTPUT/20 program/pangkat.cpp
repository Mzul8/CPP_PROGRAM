#include <iostream>
using namespace std;

int main(){
	
	int i, pangkat, nilai, total;
	total = 1;
	
	cout << "Masukkan nilai: ";
	cin >> nilai;
	
	cout << "Masukkan nilai pangkat: ";
	cin >> pangkat;
	
	cout << "\n";
	
	for(i = 1; i <= pangkat; i++){
		
		total = total * nilai;
//		if(){
//			
//		}
		cout << i << ". " << nilai << " * " << i << " = " << total << "\n";
	}
	
	cout << "\nHasil dari: " << nilai << " pangkat " << pangkat << " = " << total;
	
	return 0;
}
