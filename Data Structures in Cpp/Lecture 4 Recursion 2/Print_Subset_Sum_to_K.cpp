/*
Given an array A and an integer K, print all subsets of A which sum to K.
Subsets are of length varying from 0 to n, that contain elements of the array. 
But the order of elements should remain same as in the input array.
*/

void printSubsetSumToK(int input[], int size, int k, int output[], int out_size)
{
    //Base Case
    if(size == 0)
    {
        if(k == 0)
        {
            for(int i = 0; i < out_size; i++)
            {
                cout << output[i] << " ";
            }
            cout << endl;
        }
        return;
    }

    //Recursion Call if input[0] is not included
    printSubsetSumToK(input+1,size-1,k,output,out_size);

    //Recursion Call if input[0] in included in output array
    output[out_size] = input[0];
    printSubsetSumToK(input+1,size-1,k-input[0],output,out_size+1);
}
void printSubsetSumToK(int input[], int size, int k) {
    // Write your code here

    //array to store output 
    int output[size];
    printSubsetSumToK(input,size,k,output,0);
}

