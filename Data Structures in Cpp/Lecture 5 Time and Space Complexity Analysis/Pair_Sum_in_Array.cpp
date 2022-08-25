/*
You have been given an integer array/list(ARR) and a number 'num'. 
Find and return the total number of pairs in the array/list which sum to 'num'.
*/

int pairSum(int *arr, int n, int num)
{
	//Write your code here
/*
time complexity=O(n^2)
space complexity=O(1)
*/
    /*
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i>j && arr[i]+arr[j]==num){
                count++;
            }
        }
    }
    return count;
    */
/*
time complexity= O(nlogn)
space complexity= O(n)
*/    
    sort(arr,arr+n);
    int count=0;
    int len1=0,len2=0;
    int i=0,j=n-1;
    while(j>i){
        if(arr[i]==arr[j]){
        	if(arr[i]+arr[j]!=num){
            	break;
        	}else{
            	len1=j+1-i;
            	count+=(len1*(len1-1))/2;
            	break;
     	    }	
    	}else{
            while(j>i && arr[i]+arr[j]>num){
        		j--;
            }
            while(j>i && arr[i]+arr[j]<num){
                i++;
            }
            if(j>i && arr[i]+arr[j]==num && arr[i]!=arr[j]){
                len1=1,len2=1;
                while(j>i && arr[i]==arr[i+1]){
                    len1++;i++;
                }
                while(j>i && arr[j]==arr[j-1]){
                    len2++;j--;
                }
                j--;
                count+=len1*len2;
            }
        }
    }
    return count;
}