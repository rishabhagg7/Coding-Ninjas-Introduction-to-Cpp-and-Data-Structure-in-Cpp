/*
Given an array of length N and an integer x, you need to find and return the first index 
of integer x present in the array. Return -1 if it is not present in the array.
First index means, the index of first occurrence of x in the input array.
Do this recursively. Indexing in the array starts from 0.
*/

int firstIndex(int input[], int size, int x) 
{
  /* Don't write main().
     Don't read input, it is passed as function argument.
     Return output and don't print it.
     Taking input and printing output is handled automatically.
  */

    //Base Case
	if(size == 0)
    {
        return -1;
    }
    if(input[0] == x)
    {
        return 0;
    }

    //Recursive Call
    int check = firstIndex(input + 1 , size - 1, x);

    //Small Calculation or Work
    if(check == -1)
    {
        return -1;
    }
    return 1 + check;
}
