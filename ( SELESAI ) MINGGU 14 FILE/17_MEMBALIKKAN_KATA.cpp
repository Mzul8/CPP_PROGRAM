#include <iostream>
#include <string>
#include <fstream>
using namespace std;

void reverseString(string str) {
    
    if(str.length() == 0) return;
    cout << str[str.length()-1];
    reverseString(str.substr(0, str.length()-1));
}

int main() {
    string str;
    ofstream membalikkanKata;
    membalikkanKata.open("membalikkankata.txt", ios::app);
    
    cout << "Masukkan kalimat: ";
    getline(cin, str);
    membalikkanKata << "Sebelum dibalik: " << str;

    cout << "Kalimat terbalik: ";
    reverseString(str);
    membalikkanKata << "\nSetelah Dibalik: " << str;
    membalikkanKata.close();
return 0;
}