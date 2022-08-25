/*
You have been given an integer array/list(ARR) of size N which contains numbers 
from 0 to (N - 2). Each number is present at least once. That is, if N = 5, 
the array/list constitutes values ranging from 0 to 3, and among these, 
there is a single integer value that is present twice. 
You need to find and return that duplicate number present in the array.
*/

int findDuplicate(int *arr, int n)
{
    //Write your code here  
/*
time complexity=O(n^2)
space complexity=O(1)
*/    
    /*
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(arr[i]==arr[j] && i!=j)
            {
                return arr[i];
            }
        }
    }
    */
/*
time complexity=O(nlogn)
space complexity=O(n)
*/  
    /*
    sort(arr,arr+n);
    for(int i=0;i<n-1;i++)
    {
        if(arr[i]==arr[i+1])
        {
            return arr[i];
        }
    }
    return arr[n-1];
    */
/*
time complexity=O(n)
sapce complexity=O(1)
*/
    
    int sum=0,orgSum=0;
    for(int i=0;i<=n-2;i++)
    {
    	sum=sum+i;
    }
    for(int i=0;i<n;i++)
    {
    	orgSum=orgSum+arr[i];
    }
    return (orgSum-sum);


/*
time complexity=O(n)
sapce complexity=O(1)
*/  
    /*
    int XOR=0,orgXOR=0;
    for(int i=0;i<=n-2;i++)
    {
        XOR^=i;
    }
    for(int i=0;i<n;i++)
    {
        orgXOR^=arr[i];
    }
    return (orgXOR-XOR);
    */
}