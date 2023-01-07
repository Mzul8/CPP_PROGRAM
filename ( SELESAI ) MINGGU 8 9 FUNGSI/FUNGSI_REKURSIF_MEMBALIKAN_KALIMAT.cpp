#include <iostream>
#include <string>
using namespace std;

void reverseString(string str) {
    
    if(str.length() == 0) return;
    cout << str[str.length()-1];
    reverseString(str.substr(0, str.length()-1));
}

int main() {
    string str;

    cout << "Masukkan kalimat: ";
    getline(cin, str);

    cout << "Kalimat terbalik: ";
    reverseString(str);
return 0;
}