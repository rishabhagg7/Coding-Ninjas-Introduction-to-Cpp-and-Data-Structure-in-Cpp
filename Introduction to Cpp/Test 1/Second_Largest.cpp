/*
Take input a stream of n integer elements, find the second largest element present.
The given elements can contain duplicate elements as well. If only 0 or 1 element is 
given, the second largest should be INT_MIN ( - 2^31 ).
*/

#include<iostream>
using namespace std;
#include <climits>


int main()
{
    
    // Write your code here

    //Take Input
    int n;
    cin >> n;

    //Initialisation
    int largest = INT_MIN;
    int second_largest = INT_MIN;

    for(int i = 0; i < n; i++)
    {
        //Take input numbers
        int num;
        cin >> num;

        if(num > largest)
        {
            second_largest = largest;
            largest = num;
        }
        //Both numbers should not be same
        else if(num > second_largest && num != largest)
        {
            second_largest = num;
        }
    }

    //Output
    cout << second_largest;

    return 0;
}


