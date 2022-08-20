/*
You are given an integer array/list(ARR) of size N. It contains only 0s, 1s and 2s. 
Write a solution to sort this array/list in a 'single scan'.
'Single Scan' refers to iterating over the array/list just once or to put it in other words, 
you will be visiting each element in the array/list just once.
*/

void sort012(int *arr, int n)
{
    //Write your code here

    //Basic Approach: count no 0 , 1 , 2 and fill the array
    //Best Approach: Sort 0 and 2 so 1 will be sorted side by side

    int pos0 = 0, pos2 = n - 1;
    for(int i = 0; i <= pos2; i++)
    {
        if(arr[i] == 0)
        {
            int temp = arr[i];
            arr[i] = arr[pos0];
            arr[pos0] = temp;
            pos0++;
        }
        if(arr[i] == 2)
        {
            int temp = arr[i];
            arr[i] = arr[pos2];
            arr[pos2] = temp;
            pos2--;

            //Since 0 and 2 is still not sorted and needed to be positioned
            if(arr[i] == 0 || arr[i] == 2)
            {
                i--;
            }
        }
    }
}
