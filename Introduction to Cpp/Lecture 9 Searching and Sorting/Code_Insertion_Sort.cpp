/*
Provided with a random integer array/list(ARR) of size N, you have been required to 
sort this array using 'Insertion Sort'.
*/

void insertionSort(int *input, int size)
{
    //Write your code here
    for(int i = 1; i < size; i++)
    {
        //Storing current variable
        int current = input[i];
        int j;
        for(j = i - 1; j >= 0; j--)
        {
            //If current element is smaller then shift right by 1 otherwise come out of loop
            if(input[j] > current)
            {
                input[j+1] = input[j];
            }
            else
            {
                break;
            }
        }
        
        //Inserting the current element at the required position
        input[j+1] = current;
    }
}