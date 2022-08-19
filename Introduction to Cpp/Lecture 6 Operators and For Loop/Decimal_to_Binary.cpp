/*
Given a decimal number (integer N), convert it into binary and print.
The binary number should be in the form of an integer.
Note: The given input number could be large, so the corresponding binary number 
can exceed the integer range. So you may want to take the answer as long for CPP and Java.
Note for C++ coders: Do not use the inbuilt implementation of "pow" function. 
The implementation of that function is done for 'double's and it may fail when used for 
'int's, 'long's, or 'long long's. Implement your own "pow" function to work for non-float 
data types.
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
    int binary = 0;
    // k is used instead of pow()
    for(int i = N, k = 1; i > 0; i = i / 2, k = k * 10)
    {
        binary = binary + (i%2)*k;
    }

    //Output
    cout << binary;
    return 0;
}
