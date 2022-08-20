/*
Given an array of length N, you need to find and print the sum of all elements of the array.
*/
#include<iostream>
using namespace std;

int main()
{
    /* Read input as specified in the question.
     * Print output as specified in the question.
    */
    //Take Input
    int N;
    cin >> N;
    int arr[N];
    int sum = 0;

    //Input and Calculation
    for(int i = 0; i < N; i++)
    {
        cin >> arr[i];
        sum = sum + arr[i];
    }

    //Output
    cout << sum;

    return 0;
}


