/*
You have been given an integer array/list(ARR) of size N. Where N is equal to [2M + 1].
Now, in the given array/list, 'M' numbers are present twice and one number is present only once.
You need to find and return that number which is unique in the array/list.
*/

int findUnique(int *arr, int n) 
{
/*
time complexity=O(n^2)
space complexity=O(1)
*/
    // Write your code here
    /*
    for(int i=0;i<n;i++)
    {
        int j;
        for(j=0;j<n;j++)
        {
            if(arr[i]==arr[j] && i!=j)
            {
                break;
            }
        }
        if(j==n)
        {
            return arr[i];
        }
    }
    */

/*
time complexity=O(n^2)
space complexity=O(1)
*/
    /*
    int unique=arr[0];
    int val=0;
    for(int i=0;i<n;i++)
    {
        if(i!=val && unique==arr[i])
        {
            unique=arr[++val];
            i=-1;
        }
        if(i==n-1)
        {
            return unique;
        }
    }
    */

/*
time complexity=O(nlogn)  // n=2m+1
space complexity=O(n)
*/
    /*
    sort(arr,arr+n);
    for(int i=0;i<n-1;i=i+2)
    {
        if(arr[i]!=arr[i+1])
        {
            return arr[i];
        }
    }
    return arr[n-1];
    */
   
/*
time complexity=O(n)
space complexity=O(1)
*/
    int ans=0;
    for(int i=0;i<n;i++)
    {
        ans=ans^arr[i];
    }
    return ans;
}