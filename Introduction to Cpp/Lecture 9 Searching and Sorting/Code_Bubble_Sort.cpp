/*
Provided with a random integer array/list(ARR) of size N, you have been required to sort 
this array using 'Bubble Sort'.
*/
void bubbleSort(int *input, int size)
{
    //Write your code here
    for(int i = 0 ; i < size - 1; i++)
    {
        for(int j = 0; j < size - 1 - i; j++)
        {
            if(input[j] > input[j+1])
            {
                //Swapping adjacent elements
                int temp = input[j];
                input[j] = input[j+1];
                input[j+1] = temp;
            }
        }
    }
}