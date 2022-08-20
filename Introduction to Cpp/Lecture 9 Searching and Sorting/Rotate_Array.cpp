/*
You have been given a random integer array/list(ARR) of size N. Write a function that 
rotates the given array/list by D elements(towards the left).
*/

void reverse(int *arr, int size){
    for(int i = 0, j = size - 1; j > i; i++, j--)
    {
        //Swapping
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
}
void rotate(int *input, int d, int n)
{
    //Write your code here
    
    //Brute Force Solution
    //Rotating one be one: shifting one element to end and complete array to left in each step
    //Time Limit Exceeded
    
    // for(int i = 0; i < d; i++)
    // {
    //     int val = input[0];
    //     for(int j = 1; j < n; j++)
    //     {
    //         input[j-1] = input[j];
    //     }
    //     input[n-1] = val;
    // }
    
    //Better Approach
    //Using extra space/array
    //Saving first d elements in an array, then shifting n-d elements to left and filling last d elements from the saved array  

    // int arr[d];
    // for(int i = 0; i < d; i++)
    // {
    //     arr[i] = input[i];
    // }
    // for(int i = 0; i < n - d; i++)
    // {
    //     input[i] = input[i+d];
    // }
    // for(int i = n - d, j = 0; i < n; i++)
    // {
    //     input[i] = arr[j++];
    // }
    
    //Best Approach 
    
    reverse(input,n);
    reverse(input,n-d);
    reverse(input+n-d,d);
}