/*
Print the following pattern for the given number of rows.
Note: N is always odd.
Pattern for N = 5
..*
.***
*****
.***
..*
The dots represent spaces.
*/
#include<iostream>
using namespace std;


int main() 
{
    
    /*  Read input as specified in the question.
     * Print output as specified in the question.
     */

    //Take Input
    int N;
    cin >> N;

    //Output(upper half)
    for(int i = 0; i <= N/2; i++)
    {
        //Spaces
        for(int j = 0; j < N/2 - i; j++)
        {
            cout << " ";
        } 

        //Stars
        for(int j = 0; j < 2*i + 1; j++)
        {
            cout << "*";
        }

        cout << endl;
    }

    //Output(lower half)
    for(int i = 0; i < N/2; i++)
    {
        //Spaces
        for(int j = 0 ; j <= i; j++)
        {
            cout << " ";
        }

        //Stars
        for(int j = 0; j < N - 2*i - 2; j++)
        {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}
