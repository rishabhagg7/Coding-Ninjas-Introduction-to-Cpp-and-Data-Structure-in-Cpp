/***
You need to save all the subsets in the given 2D output array. And return the number of subsets(i.e. number of rows filled in output) from the given function.

In ith row of output array, 1st column contains length of the ith subset. And from 1st column actual subset follows.
For eg. Input : {1, 3, 4, 2} and K = 5, then output array should contain
	{{2, 1, 4},	// Length of this subset is 2
	{2, 3, 2}}	// Length of this subset is 2

Don’t print the subsets, just save them in output.
***/

int subsetSumToK(int input[], int n, int output[][50], int k) {
    // Write your code here
	//Base Case
	if(n == 0)
    {
        if(k == 0)
        {
            output[0][0] = 0;
            return 1;
        }
        return 0;
    }  
    
    //Recursion calls: include input[0] in one and exclude in one
    int size1 = subsetSumToK(input+1,n-1,output,k);
    int size2 = subsetSumToK(input+1,n-1,output+size1,k-input[0]);
    
    //Inserting input[0] in which input[0] was included
    for(int i = 0; i < size2; i++)
    {
        //Updating length by incrementing it by one
        output[i+size1][0] = output[i+size1][0] + 1;
        
        //Shifting to create space
        for(int j = output[i+size1][0];j > 0; j--)
        {
            output[i+size1][j+1] = output[i+size1][j];
        }
        
        //input[0] inserted
        output[i+size1][1] = input[0];
    }
    return size1+size2;
}

