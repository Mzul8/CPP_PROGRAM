#include <bits/stdc++.h> 
using namespace std; 

int main() 
{ 
	 
	string str = "";
	cout<<"Enter the string:\n";
	
	cin>>str;

	char arr[str.length() + 1]; 
    cout<<"String to char array conversion:\n";
    for (int x = 0; x < sizeof(arr); x++) { 
        arr[x] = str[x]; 
        cout << "[" << arr[x] << "]"; 
    } 

	return 0; 
}