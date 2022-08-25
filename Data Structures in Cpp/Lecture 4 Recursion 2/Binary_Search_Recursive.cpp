/*
Given an integer sorted array (sorted in increasing order) and an element x, 
find the x in given array using binary search. Return the index of x.
Return -1 if x is not present in the given array.
Note : If given array size is even, take first mid.
*/

// input - input array
// size - length of input array
// element - value to be searched
int binarySearch(int input[], int start, int end, int element)
{
    if(start > end)
    {
        return -1;
    }
    int mid = (start+end)/2;
    if(input[mid] == element)
    {
        return mid;
    }
    else if(input[mid] > element)
    {
        return binarySearch(input,start,mid-1,element);
    }
    else
    {
        return binarySearch(input,mid+1,end,element);
    }
    return -1;
}
int binarySearch(int input[], int size, int element) 
{
    // Write your code here
	return binarySearch(input,0,size-1,element);
}

