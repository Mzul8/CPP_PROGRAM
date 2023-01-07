#include <iostream>
using namespace std;

main(){
    int i,j,l,n = 4;
    cout << "\nPola belah ketupat dengan angka\n";
        for(int i = 1; i <= n; i++){
            for(int j = n; j >= i; j--){
                cout << " ";
            } 
            for(int k = 1; k <= 2 * i - 1; k++){
                cout << k;
            }
            cout << endl;
        }
        for(int i = 2; i <= n; i++){
            for(int j = 1; j <= i; j++){
                cout << " ";
            }
            for(int l = n; l >= 2 * i - n; l--){
                cout << l;
            }
            cout << endl;
        }
}