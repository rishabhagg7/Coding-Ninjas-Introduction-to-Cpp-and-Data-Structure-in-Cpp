/*
Given a number N, find its square root. You need to find and print only the integral 
part of square root of N.
For eg. if number given is 18, answer is 4.
*/

#include<iostream>
using namespace std;

int main() 
{
	// Write your code here

    //Take Input
	int N;
    cin >> N;
    
    //Calculation and Output
    for(int i = 0; i <= N; i++)
    {
        if(i * i  > N)
        {
            cout << i - 1;
            break;
        }
        else if(i * i == N)
        {
            cout << i;
            break;
        }
    }

    return 0;
}
