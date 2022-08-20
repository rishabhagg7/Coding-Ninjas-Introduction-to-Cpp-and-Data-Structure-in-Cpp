/*
You have been given an integer array/list(ARR) and a number X. 
Find and return the total number of pairs in the array/list which sum to X.
*/

int pairSum(int *input, int size, int x)
{
	//Write your code here
    int count = 0;
    for(int i = 0; i < size; i++)
    {
        for(int j = i + 1; j < size; j++)
        {
            if(input[i] + input[j] == x)
            {
                count++;
            }
        }
    }
    return count;
}