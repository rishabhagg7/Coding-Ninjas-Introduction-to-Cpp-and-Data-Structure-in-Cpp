/*
You have been given an empty array(ARR) and its size N. The only input taken from the user 
will be N and you need not worry about the array.
Your task is to populate the array using the integer values in the range 1 to N
(both inclusive) in the order - 1,3,5,.......,6,4,2.
*/

void arrange(int *arr, int n)
{
    //Write your code here
    // At j == i middle element will be assigned the value
    for(int i = 0, j = n - 1, val = 1; j >= i; i++, j--)
    {
        arr[i] = val++;

        //Condition if last element does not assigned different value
        if(j!=i)
        {
        	arr[j] = val++;
        }

    }

}