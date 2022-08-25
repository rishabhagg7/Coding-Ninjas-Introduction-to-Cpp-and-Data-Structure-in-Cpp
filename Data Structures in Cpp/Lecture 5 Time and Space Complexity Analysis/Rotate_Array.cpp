/*
You have been given a random integer array/list(ARR) of size N. Write a function 
that rotates the given array/list by D elements(towards the left).
Note:
Change in the input array/list itself. You don't need to return or print the elements.
*/

void reverse(int *input,int num)
{
    for(int i=0,j=num-1;i<j;i++,j--)
    {
        int temp=input[i];
        input[i]=input[j];
        input[j]=temp;
    }
}
void rotate(int *input, int d, int n)
{
    //Write your code here

/*
time complexity=O(n)
space complexity=O(d)
*/  /*  
    int temp[d];
    for(int i=0;i<d;i++)
    {
        temp[i]=input[i];
    }
    for(int i=0;i<n-d;i++)
    {
        input[i]=input[i+d];
    }
    for(int i=0;i<d;i++)
    {
        input[n-d+i]=temp[i];
    }
    */
   
/*
time complexity=O(n)
space complexity=O(1)
*/
    reverse(input,n);
    reverse(input,n-d);
    reverse(input+(n-d),d);
}