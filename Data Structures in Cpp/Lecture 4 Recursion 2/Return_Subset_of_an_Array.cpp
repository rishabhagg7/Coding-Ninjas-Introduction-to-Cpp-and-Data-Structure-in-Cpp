/*
Given an integer array (of length n), find and return all the subsets of input array.
Subsets are of length varying from 0 to n, that contain elements of the array. 
But the order of elements should remain same as in the input array.
*/

/***
You need to save all the subsets in the given 2D output array. 
And return the number of subsets(i.e. number of rows filled in output) from the given function.

In ith row of output array, 1st column contains length of the ith subset. 
And from 1st column actual subset follows.
For eg. Input : {1, 2}, then output should contain 
	{{0}, 		// Length of this subset is 0
	{1, 2},		// Length of this subset is 1
	{1, 1},		// Length of this subset is also 1
	{2, 1, 2}}	// Length of this subset is 2

Don’t print the subsets, just save them in output.
***/

int subset(int input[], int n, int output[][20]) 
{
    // Write your code here

    //Base Case
	if(n == 0)
    {
        output[0][0] = 0;
        return 1;
    }

    //Recursion Call to get remaining subsets without input[0] 
    int new_size = subset(input+1,n-1,output);

    //Now making new subsets with the help of subsets of smaller input
    for(int i = 0; i < new_size; i++)
    {
        output[i+new_size][0] = output[i][0]+1;
        output[i+new_size][1] = input[0];
        for(int j = 0; j < output[i][0]; j++)
        {
            output[i+new_size][j+2] = output[i][j+1];
        }
    }
    return 2*new_size;
}
