/*
You have been given a random integer array/list(ARR) of size N. You are required to find 
and return the second largest element present in the array/list.
If N <= 1 or all the elements are same in the array/list then return -2147483648 or 
-2 ^ 31(It is the smallest value for the range of Integer)
*/
#include<climits>
int findSecondLargest(int *input, int n)
{
    //Write your code here
    
    int largest = INT_MIN, second_largest = INT_MIN;
    for(int i = 0; i < n; i++)
    {

        if(input[i] > largest)
        {
            second_largest = largest;
            largest = input[i];
        }
        
        //largest and second largest element should not be same
        else if(input[i] > second_largest && input[i] != largest)
        {
            second_largest = input[i];
        }

    }
    return second_largest;
}