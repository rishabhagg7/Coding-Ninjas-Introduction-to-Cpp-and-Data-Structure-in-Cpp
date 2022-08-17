/*
Write a program to find x to the power n (i.e. x^n). Take x and n from the user. 
You need to print the answer.
Note : For this question, you can assume that 0 raised to the power of 0 is 1
*/

#include<iostream>
using namespace std;

int main() {
	// Write your code here

    //Take input
	int x , n;
    cin >> x >> n;
    
    //calculation
    int power = 1;
    for(int i = 0; i < n; i++){
        power = power * x;
    }

    //Output
    cout << power;
    
    return 0;
}
