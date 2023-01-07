#include <iostream>
using namespace std;

int main() {
    float array[5]; 
    float sum = 0;

    cout << "Masukkan nilai : " << endl;
    for (int i = 0; i < 5; i++) {
    cin >> array[i];
    sum += array[i];
}
cout << "Rata-rata Nilai: " << sum/5 << endl;
return 0;
}