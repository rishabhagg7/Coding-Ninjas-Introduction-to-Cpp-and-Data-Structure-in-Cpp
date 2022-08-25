/*
Given an integer array A of size N, check if the input array can be splitted in two parts such that -
- Sum of both parts is equal
- All elements in the input, which are divisible by 5 should be in same group.
- All elements in the input, which are divisible by 3 (but not divisible by 5) should be in other group.
- Elements which are neither divisible by 5 nor by 3, can be put in any group.
Groups can be made with any set of elements, i.e. elements need not to be continuous. 
And you need to consider each and every element of input array in some group.
Return true, if array can be split according to the above rules, else return false.
*/

bool splitArray(int *input, int size, int left, int right)
{
    //Base Case
    if(size == 0)
    {
        return left == right;
    }

    //Recursive Calls
    if(input[0] % 5 == 0)
    {
        return splitArray(input+1,size-1,left+input[0],right);
    }
    else if(input[0] % 3 == 0)
    {
        return splitArray(input+1,size-1,left,right+input[0]);
    }
    else
    {
        return splitArray(input+1,size-1,left+input[0],right) || splitArray(input+1,size-1,left,right+input[0]);
    }
}
bool splitArray(int *input, int size) 
{
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Return output and don't print it.
     * Taking input and printing output is handled automatically.
     */
    
    return splitArray(input,size,0,0);
}

