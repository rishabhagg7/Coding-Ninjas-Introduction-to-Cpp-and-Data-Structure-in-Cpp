/*
You have been given a random integer array/list(ARR) and a number X.
Find and return the triplet(s) in the array/list which sum to X.
*/

int pairSum(int *arr,int si,int ei,int num)
{
    int count=0;
    int len1=0,len2=0;
    int i=si,j=ei;
    while(j>i)
    {
        if(arr[i]==arr[j])
        {
        	if(arr[i]+arr[j]!=num)
            {
            	break;
        	}
            else
            {
            	len1=j+1-i;
            	count+=(len1*(len1-1))/2;
            	break;
     	    }	
    	}
        else
        {
            while(j>i && arr[i]+arr[j]>num)
            {
        		j--;
            }
            while(j>i && arr[i]+arr[j]<num)
            {
                i++;
            }
            if(j>i && arr[i]!=arr[j] && arr[i]+arr[j]==num)
            {
                len1=1,len2=1;
                while(j>i && arr[i]==arr[++i])
                {
                    len1++;
                }
                while(j>i && arr[j]==arr[--j])
                {
                    len2++;
                }
                count+=len1*len2;
            }
        }
    }
    return count;
}
int tripletSum(int *arr, int n, int num)
{
	//Write your code here
/*
time complexity= O(n^3)
space complexity= O(1)
*/   
    /*
    int count=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            for(int k=j+1;k<n;k++)
            {
                if(arr[i]+arr[j]+arr[k]==num)
                {
                    count++;
                }
            }
        }
    }
    return count;
    */

/*
time complexity= O(n^2)
space complexity= O(n)
*/ 
    sort(arr,arr+n); 
    int numTriplets = 0; 
    for (int i = 0; i < n; i++) 
    {
        int pairSumFor = num - arr[i]; 
        int numPairs = pairSum(arr, (i + 1), (n - 1), pairSumFor); 
        numTriplets += numPairs;
    }
    return numTriplets;
}
