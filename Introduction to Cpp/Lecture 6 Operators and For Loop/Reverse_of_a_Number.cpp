/*
Write a program to generate the reverse of a given number N. Print the corresponding 
reverse number.
Note : If a number has trailing zeros, then its reverse will not include them. For e.g., 
reverse of 10400 will be 401 instead of 00401.
*/

#include<iostream>
using namespace std;

int main() 
{
	// Write your code here

    //Take Input
	int N;
    cin >> N;

    //Calculation
    int reverse = 0;
    for(int i = N; i > 0; i = i/10)
    {
        reverse = 10*reverse + i % 10;
    }

    //Output
    cout << reverse;
}
