/*
You have been given an integer array/list(ARR) of size N that contains only integers, 
0 and 1. Write a function to sort this array/list. Think of a solution which scans 
the array/list only once and don't require use of an extra array/list.
*/

void sortZeroesAndOne(int *input, int size)
{
    //Write your code here

    //Iterate till all 1s are sorted 
    for(int i = 0,val0 = 0,val1 = size - 1; i < size && i < val1; i++)
    {
        if(input[i] == 1)
        {
            //Swapping
            int temp = input[i];
            input[i] = input[val1];
            input[val1] = temp;

            //Updating the position of sorted 1s
            val1--;


            //Cannot iterate as the 1 got swapped with 1 and it should be sorted before
            //moving forward
            if(input[i] == 1)
            {
                i--;
            }
        }
    }
}