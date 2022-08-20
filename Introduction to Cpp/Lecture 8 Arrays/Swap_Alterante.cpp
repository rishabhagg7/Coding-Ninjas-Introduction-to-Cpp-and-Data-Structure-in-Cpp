/*
You have been given an array/list(ARR) of size N. You need to swap every pair of alternate 
elements in the array/list.
You don't need to print or return anything, just change in the input array itself.
*/

void swapAlternate(int *arr, int size)
{
    //Write your code here
    //we will iterate the odd places of the array
    //we will not check the last element 
    for(int i = 0; i < size - 1; i = i + 2)
    {
        //Swapping Adjacent elements
        int temp = arr[i];
        arr[i] = arr[i+1];
        arr[i+1] = temp;
    }
}