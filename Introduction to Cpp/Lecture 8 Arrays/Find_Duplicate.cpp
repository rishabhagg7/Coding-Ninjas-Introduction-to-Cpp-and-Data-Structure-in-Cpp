/*
You have been given an integer array/list(ARR) of size N which contains numbers from 0 to 
(N - 2). Each number is present at least once. That is, if N = 5, the array/list 
constitutes values ranging from 0 to 3 and among these, there is a single integer value 
that is present twice. You need to find and return that duplicate number present in the 
array.
*/

int duplicateNumber(int *arr, int size)
{
    //Write your code here
    
    //Brute Force
    for(int i = 0; i < size; i++)
    {
        // Here no need to check from beginning
        for(int j = i+1; j < size; j++)
        {
            //Duplicate Number Found!!
            if(arr[i] == arr[j])
            {
                return arr[i];
            }
        }
    }

    //Best Approach
    //Concept: since it is given all numbers are there from 0 to (N-2) and one number is
    //         repeated twice so we can subtract the array sum from sum of 0 to (N-2)


    // int sum = 0;
    // for(int i = 0; i < size; i++)
    // {
    //     sum = sum + arr[i];
    // }
    // return sum - ((size-1)*(size-2))/2;
}