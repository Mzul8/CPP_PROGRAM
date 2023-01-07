#include <iostream>
using namespace std;

int multiply(int x, int y) {

    if (y == 0) {
    return 0;
    }
    else {
    return x + multiply(x, y-1);
    }
}

int main() {
    int x, y;

    cout << "Masukkan Angka : ";
    cin >> x;
    cout << "Masukkan Angka : ";
    cin >> y;
    cout << "Hasil : " << multiply(x, y) << endl;
    return 0;
}