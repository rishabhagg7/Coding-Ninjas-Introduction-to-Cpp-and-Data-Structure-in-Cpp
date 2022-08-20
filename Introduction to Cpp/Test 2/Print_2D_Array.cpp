/*
Given a 2D integer array with n rows and m columns. Print the 0th row from input n times, 
1st row n-1 times…..(n-1)th row will be printed 1 time.
*/

#include <iostream>
using namespace std;

void print2DArray(int **input, int row, int col) 
{
	// Write your code here
	for(int i = 0; i < row; i++)
    {
        //Loop for printing rows given no of times
        for(int count = row-i; count > 0; count--)
        {
            for(int j = 0; j < col; j++)
            {
                cout << input[i][j] << " ";
            }
            cout << endl;
        }
    }
}


