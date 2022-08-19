/*
Nth term of Fibonacci series F(n), where F(n) is a function, is calculated using the following formula -
    F(n) = F(n-1) + F(n-2), 
    Where, F(1) =  0, 
           F(2) = 1
Provided N you have to find out the Nth Fibonacci Number.
*/

#include<iostream>
using namespace std;

int main()
{
    
        /*
         *  Write your code here. 
         *  Read input as specified in the question.
         *  Print output as specified in the question.
        */

    //Take input
    int N;
    cin >> N;

    //Initial variables
    int a = 0;
    int b = 1;
    int c = 1;

    //Calculation
    for(int i = 2; i <= N; i++)
    {
        c = a + b;
        a = b;
        b = c;
    }

    //Output
    cout << c;
    return 0;
}