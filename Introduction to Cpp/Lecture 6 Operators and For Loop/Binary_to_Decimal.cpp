/*
Given a binary number as an integer N, convert it into decimal and print.
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
    int decimal = 0;
    // k is used instead of pow()
    for(int i = N, k = 1; i > 0; i = i/10, k = k * 2)
    {
        decimal = decimal + (i%10)*k;
    }

    //Output
    cout << decimal;
}
