/*
Write a program that asks the user for a number N and a choice C. 
And then give them the possibility to choose between computing the sum and 
computing the product of all integers in the range 1 to N (both inclusive).
If C is equal to -
 1, then print the sum
 2, then print the product
 Any other number, then print '-1' (without the quotes)
*/

#include<iostream>
using namespace std;

int main() 
{
	// Write your code here

    //Take Input
	int N;
    cin >> N;
    int choice;
    cin >> choice;

    //Calculation and Output
    if(choice == 1)
    {
        int sum = 0;
        for(int i = 1; i <= N; i++)
        {
            sum = sum + i;
        }
        cout << sum;

    }
    else if(choice == 2)
    {
        int product = 1;
        for(int i = 1; i <= N; i++)
        {
            product = product * i;
        }
        cout << product;
    }
    else 
    {
        cout << "-1";
    }

    return 0;
}
