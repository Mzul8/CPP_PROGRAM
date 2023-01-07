#include <iostream>
using namespace std;

main(){
    int n = 4;
    for(int i = n; n >= 1; n--){
        
        for(int j = 1; j <= n; j++){
            cout << " ";
        }

        for(int j = 1; j <= 2 * i - 1; j++){
            cout << j;
        }
        cout << endl;
    }
}