/*
Sort an array A using Merge Sort.
Change in the input array itself. So no need to return or print anything.
*/

void merge(int arr1[],int size1, int arr2[],int size2,int output[])
{
    //Smaller element merged first
    int i,j,k = 0;
    for(i = 0, j = 0; i < size1 && j < size2;)
    {
        if(arr1[i] < arr2[j])
        {
            output[k++] = arr1[i++];
        }
        else
        {
            output[k++] = arr2[j++];
        }
    }

    //Remainging Elements(if any)
    while(i < size1)
    {
        output[k++] = arr1[i++];
    }
    while(j < size2)
    {
        output[k++] = arr2[j++];
    }
}
void mergeSort(int input[], int size)
{    
	// Write your code here

    //Base Case 
    if(size == 0 || size == 1)
    {
        return;
    }

    //Dividing given array in two equal parts
    int mid = size/2;
    int part1[500],part2[500];
    for(int i = 0; i < 500; i++)
    {
        part1[i] = input[i];
    }
    for(int i = 0; i < 500; i++)
    {
        part2[i] = input[mid+i];
    }

    //Recursive Calls
    mergeSort(part1,mid);
    mergeSort(part2,size-mid);

    //Merging the two arrays
    merge(part1,mid,part2,size - mid,input);
}
