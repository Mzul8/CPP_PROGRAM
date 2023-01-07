#include <iostream>
using namespace std;

int mod(int num, int mod) {
if (num < mod) {
return num;
} else {
return mod(num - mod, mod);
}
}

int main() {
int num, modulus;
cout << "Enter number: ";
cin >> num;
cout << "Enter modulus: ";
cin >> modulus;
cout << "Result: " << mod(num, modulus) << endl;
return 0;
}
