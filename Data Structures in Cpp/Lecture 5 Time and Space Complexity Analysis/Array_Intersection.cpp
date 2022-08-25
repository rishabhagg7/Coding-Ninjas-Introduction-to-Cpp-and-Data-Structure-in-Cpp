/*
You have been given two integer arrays/list(ARR1 and ARR2) of size N and M, respectively. 
You need to print their intersection; An intersection for this problem can be defined 
when both the arrays/lists contain a particular value or to put it in other words, 
when there is a common value that exists in both the arrays/lists.
*/

#include<climits>
void intersection(int *arr1, int *arr2, int n, int m) 
{
    //Write your code here
/*
time complexity=O(n*m)
space complexity=O(n)
*/
    /*
    sort(arr1,arr1+n);
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            if(arr1[i] == arr2[j])
            {
                cout << arr1[i] << " ";
                arr2[j] = INT_MIN;
                break;
            }
        }
    }
    */

/*
time complexity=O(nlogn+mlogn)
space complexity=O(n+m)
*/
    sort(arr1 , arr1 + n);
    sort(arr2 , arr2 + m);
    for(int i = 0 , j = 0 ; i < n && j < m ;)
    {
        if(arr1[i] == arr2[j])
        {
            cout << arr1[i] << " ";
            i++;
            j++;
        }
        else if(arr1[i] > arr2[j])
        {
            j++;
        }
        else
        {
            i++;
        }
    }
}
