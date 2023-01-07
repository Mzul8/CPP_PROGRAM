#include <iostream>

using namespace std;

int add(int n) {
    if (n == 0) {
    return 0; 
    }
    return n + add(n - 1); 
}

int main() {
    int n;
    cout << "Masukkan Angka : ";
    cin >> n;

    cout << "Jumlah total dari angka 1 ke " << n << " adalah: " << add(n) << endl;
    return 0;
}