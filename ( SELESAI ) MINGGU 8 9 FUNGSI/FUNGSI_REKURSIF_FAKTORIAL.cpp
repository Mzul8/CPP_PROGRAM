#include <iostream>
using namespace std;

int faktorial(int n){
    int nilai = n;
    if(n == 1)
    {
        return nilai;
    }
    else
    {
        return nilai*faktorial(n - 1);
    }
}

main(){
    int a;
    cout << "Masukkan nilai N: ";cin >> a;
    cout << "Nilai faktorial: " << faktorial(a);
}