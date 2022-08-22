/*
Sort an array A using Quick Sort.
Change in the input array itself. So no need to return or print anything.
*/

/*
	To apply the method explained in the hint video, we have to add two more parameters in the function call. This can be done by calling a helper function from given function. The helper function can have three parameters: array, start index, end index.  
	
	Skeleton code to achieve this:
	#include <iostream>
	using namespace std;
	
	void quickSort(int input[], int start, int end)
	{
    		// your code goes here 
	}
	void quickSort(int input[], int size)
	{
    		quickSort(input, 0, size - 1);
	}
		
*/

//Swap Function
void swap(int input[],int i, int j)
{
    int temp = input[i];
    input[i] = input[j];
    input[j] = temp;
}

//Partition Function
int partition(int input[],int start,int end)
{

    //Finding position of starting index
    int count = 0;
    for(int i = start+1; i <= end; i++)
    {
        if(input[start] >= input[i])
        {
            count++;
        }
    }

    //Placing the starting index at correct position
    swap(input,start,start+count);

    //Arranging array , smaller & equal elements wrt element at correct position shifted to left
    for(int i = start,j = end; i < start+count && j > start+count;)
    {
        if(input[i] <= input[start+count])
        {
            i++;
        }
        else if(input[j] > input[start+count])
        {
            j--;
        }else
        {
            swap(input,i,j);
            i++;
            j--;
        }
    }
    return start+count;
}

void quickSort(int input[],int start, int end)
{
    if(start >= end)
    {
        return;
    }

    //Finding a position of element at correct position
    int c = partition(input,start,end);

    //Recursive Calls
    quickSort(input,start,c-1);
    quickSort(input,c+1,end);
}


void quickSort(int input[], int size) 
{
  /* Don't write main().
     Don't read input, it is passed as function argument.
     Change in the given array itself.
     Taking input and printing output is handled automatically.
  */
	quickSort(input,0,size-1);
}