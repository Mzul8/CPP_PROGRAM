#include <iostream>
using namespace std;

int main(){
    char arr[] = {'L','O','R'};
    int size_arr  =  sizeof(arr);

    string str = "";
    for(int i = 0; i < size_arr; i++){
        str = str + arr[i];
    }

    cout << str;
    return 0;
}