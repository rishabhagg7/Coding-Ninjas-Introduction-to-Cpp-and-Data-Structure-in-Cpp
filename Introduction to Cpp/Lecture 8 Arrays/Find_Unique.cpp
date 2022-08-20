/*
You have been given an integer array/list(ARR) of size N. Where N is equal to [2M + 1].
Now, in the given array/list, 'M' numbers are present twice and one number is present 
only once.
You need to find and return that number which is unique in the array/list.
*/

int findUnique(int *arr, int size)
{
    //Write your code here
    
    //Brute Force Solution
    int unique = arr[0] , pos = 0;
    for(int i = 0; i < size; i++)
    {
        //Condition if element is not unique and same place element should not be compared
        if(arr[i] == unique && pos != i)
        {
            //Checking for unique for next element
            unique = arr[++pos]; 

            //To further check from initial position of the array
            i = -1;
        }

        //If unique element is found the value of i will be incremented to last position 
        if(i == size - 1)
        {
            return unique;
        }

    }
    
    //Best Approach
    //Concept: 2^2 = 0, 1^0 = 1
    //Eg: 2^1^3^2^1 = 1^1^2^2^3 = 0^0^3 = 0^3 = 3 = unique element


    // int unq = 0;
    // for(int i = 0; i < size; i++)
    //{
    //     unq = unq ^ arr[i];
    // }
    // return unq;
}