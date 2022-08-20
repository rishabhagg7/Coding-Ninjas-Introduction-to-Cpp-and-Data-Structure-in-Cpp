/*
Given an integer array A of size n. Find and print all the leaders present in the input 
array. An array element A[i] is called Leader, if all the elements following it (i.e. 
present at its right) are less than or equal to A[i].
Print all the leader elements separated by space and in the same order they are present 
in the input array.
*/

void Leaders(int* arr,int len)
{
	/* Don't write main().
	 * Don't read input, it is passed as function argument.
	 * Print your output exactly in the same format as shown. 
	 * Don't print any extra line.
	*/

    for(int i = 0; i < len; i++)
    {
        int j;
        for(j = i + 1; j < len; j++)
        {
            //Condtion Fail for current element
            if(arr[i] < arr[j])
            {
                break;
            }
        }

        //If break is not excuted then this will be true 
        if(j == len)
        {
            cout << arr[i] << " ";
        }
    }
}
