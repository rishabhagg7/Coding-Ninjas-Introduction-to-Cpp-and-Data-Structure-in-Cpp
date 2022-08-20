/*
You have been given two sorted arrays/lists(ARR1 and ARR2) of size N and M respectively, 
merge them into a third array/list such that the third array is also sorted.
*/

void merge(int *arr1, int size1, int *arr2, int size2, int *ans)
{
    //Write your code here 
    int i,j,k = 0;
    for(i = 0, j = 0; i < size1 && j < size2;)
    {
        //Smaller element assigned first in output array
        if(arr1[i] < arr2[j])
        {
            ans[k++] = arr1[i++];
        }else
        {
            ans[k++] = arr2[j++];
        }
    }

    //Assigning remaining elements (if any)
    while(i < size1)
    {
        ans[k++] = arr1[i++];
    }
    while(j < size2)
    {
        ans[k++] = arr2[j++];
    }
}