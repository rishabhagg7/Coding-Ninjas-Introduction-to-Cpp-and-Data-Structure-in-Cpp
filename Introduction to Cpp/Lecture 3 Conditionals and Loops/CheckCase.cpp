#include<iostream>
using namespace std;

int main() {
	// Write your code here

    // Take input
	char c;
    cin >> c;

    // Check for given conditions and print the required output
    // Here we can also use ASCII values of alphabets
    
    if(c >= 'A' && c <= 'Z'){
        cout << "1";
    }else if(c >= 'a' && c <= 'z'){
        cout << "0";
    }else{
        cout << "-1";
    }
    return 0;
}
