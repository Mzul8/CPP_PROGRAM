#include <iostream>
using namespace std;

int main(){
    int a = 5;
    int *p = nullptr;

    p = &a;

    cout << "Nilai a: "<< a << endl;
    cout << "Nilai p: "<< *p << endl;
}