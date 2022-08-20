/*
You have been given an integer array/list(ARR) of size N. It has been sorted(in 
increasing order) and then rotated by some number 'K' in the right hand direction.
Your task is to write a function that returns the value of 'K', that means, the index 
from which the array/list has been rotated.
*/

int arrayRotateCheck(int *input, int size)
{
    //Write your code here

    for(int i = 0; i < size - 1; i++)
    {
        //First smaller element will tell by how much the array is rotated
        if(input[i] > input[i+1])
        {
            return i+1;
        }
    }
    return 0;
}