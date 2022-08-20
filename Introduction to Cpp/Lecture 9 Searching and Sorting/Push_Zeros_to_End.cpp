/*
You have been given a random integer array/list(ARR) of size N. You have been required 
to push all the zeros that are present in the array/list to the end of it. Also, make 
sure to maintain the relative order of the non-zero elements.
*/
void pushZeroesEnd(int *input, int size)
{
    //Write your code here
    //Basic Approach:using extra array for non zero elements and fill remaining with 0
    //Better Approach:shift non-zero element to left using swapping and fill remaining with 0

    //Approach which required no extra space
    //If element is not zero then push(or swap) it in the beginning using iterator variable
    //So all zeros will be side by side pushed in the end
    int pos0 = 0;
    for(int i = 0; i < size; i++)
    {
        if(input[i] != 0)
        {
            //Swapping
            int temp = input[i];
            input[i] = input[pos0];
            input[pos0] = temp;

            pos0++;
        }
    }
}