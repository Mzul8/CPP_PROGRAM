#include <iostream>
#include <string.h>
using namespace std;

int main(){
	string str, newstr;
//	char newstr[20];
	
	cout <<	"Masukkan kalimat: ";
	getline(cin,str);
	
	strcpy(newstr, str);
	cout << "Teks yang disalin: " << newstr;
	return 0;
}
