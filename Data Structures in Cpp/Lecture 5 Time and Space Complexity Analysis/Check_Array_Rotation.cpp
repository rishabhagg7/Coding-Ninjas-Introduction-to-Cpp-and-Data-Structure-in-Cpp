/*
You have been given an integer array/list(ARR) of size N. 
It has been sorted(in increasing order) and then rotated by some number 'K' 
in the right hand direction.
Your task is to write a function that returns the value of 'K', that means, 
the index from which the array/list has been rotated.
*/

int arrayRotateCheck(int *input, int size)
{
    //Write your code here

/*
time complexity=O(n)
space complexity=O(1)
*/
    for(int i=0;i<size-1;i++)
    {
        if(input[i]>input[i+1])
        {
            return i+1;
        }
    }
    return 0;
}