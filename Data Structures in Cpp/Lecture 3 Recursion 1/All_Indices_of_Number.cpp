/*
Given an array of length N and an integer x, you need to find all the indexes where x 
is present in the input array. Save all the indexes in an array (in increasing order).
Do this recursively. Indexing in the array starts from 0.
*/

int index = 0;
int allIndexes(int input[], int size, int x, int output[]) 
{
  /* Don't write main().
     Don't read input, it is passed as function argument.
     Save all the indexes in the output array passed and return the size of output array.
     Taking input and printing output is handled automatically.
  */

    //Base Case
	if(size == 0)
    {
        return 0;
    }

    //Recursive Call if element found
    if(input[0] == x)
    {
        output[0] = index++;
        return 1 + allIndexes(input+1,size-1,x,output+1);
    }
    index++;

    //Recursive Call if element is not found
    return allIndexes(input+1,size-1,x,output);
}
