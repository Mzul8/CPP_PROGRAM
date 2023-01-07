#include <iostream>
using namespace std;


int divide(int num, int den) {

    if (den == 0) {
    cout << "Error: Cannot divide by 0" << endl;
    return -1;
}


else {
    
    if (num < den) {
        return 0;
    }
   
    else {
        return 1 + divide(num - den, den);
    }
}

}

int main() {
int num, den;
cout << "Masukkan angka: ";
cin >> num;
cout << "Masukkan Pembagi: ";
cin >> den;
cout << num << " dibagi dengan " << den << " adalah " << divide(num, den) << endl;
return 0;
}