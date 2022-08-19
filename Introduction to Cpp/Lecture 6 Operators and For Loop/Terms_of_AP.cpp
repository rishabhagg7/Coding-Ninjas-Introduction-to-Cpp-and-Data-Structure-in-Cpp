/*
Write a program to print first x terms of the series 3N + 2 which are not multiples of 4.
*/

#include<iostream>
using namespace std;

int main() 
{
	// Write your code here
	
    //Take Input
    int x;
    cin >> x;

    for(int i = 0; i < x;i++)
    {
        if((3*i+5)%4 != 0)
        {
        	cout << 3*i + 5 << " ";
        }
        else{
            //Incrementing x as the current term will be skipped
            x++;
        }
    }
    return 0;
}
