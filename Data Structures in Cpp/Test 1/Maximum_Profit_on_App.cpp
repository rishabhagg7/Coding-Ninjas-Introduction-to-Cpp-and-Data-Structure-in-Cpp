/*
You have made a smartphone app and want to set its subscription price such that the 
profit earned is maximised. There are certain users who will subscribe to your app only 
if their budget is greater than or equal to your price.
You will be provided with a list of size N having budgets of subscribers and you need to 
return the maximum profit that you can earn.
Lets say you decide that price of your app is Rs. x and there are N number of subscribers. 
So maximum profit you can earn is :
 m * x
where m is total number of subscribers whose budget is greater than or equal to x.
*/

//For Sorting
void merge(int input[], int si, int mid, int ei){
    int *arr=new int[ei-si+1];
    int i=si,j=mid+1,k=0;
    while(i<=mid && j<=ei)
    {
        if(input[i]<input[j])
        {
            arr[k]=input[i];
            i++;
            k++;
        }
        else
        {
            arr[k]=input[j];
            j++;
            k++;
        } 
    }
    while(i<=mid)
    {
        arr[k]=input[i];
        i++;
        k++;
    }
    while(j<=ei)
    {
        arr[k]=input[j];
        j++;
        k++;
    }
    for(int i=si;i<=ei;i++)
    {
        input[i]=arr[i-si];
    }
    delete[] arr;
}

void mergeSort(int input[],int si,int ei)
{
    if(si>=ei)
    {
        return;
    }
    int mid=(si+ei)/2;
    mergeSort(input,si,mid);
    mergeSort(input,mid+1,ei);
    merge(input,si,mid,ei);
}
int maximumProfit(int budget[], int n) 
{
    // Write your code here

    //Sorting the budget array
	mergeSort(budget,0,n-1);

    //Array to store profits
    int max[n];

    //Calculating the profit
    for(int i = 0; i < n; i++)
    {
        max[i] = (n-i)*budget[i];
    }

    //Sorting to get maximum profit
    mergeSort(max,0,n-1);

    return max[n-1];
}
