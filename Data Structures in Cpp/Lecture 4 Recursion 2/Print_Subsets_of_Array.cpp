/*
Given an integer array (of length n), find and print all the subsets of input array.
Subsets are of length varying from 0 to n, that contain elements of the array. 
But the order of elements should remain same as in the input array.
Note : The order of subsets are not important. Just print the subsets in different lines.
*/

void printSubsetsOfArray(int input[], int size, int output[],int out_size)
{

    //Base Case
    if(size == 0)
    {
        for(int i = 0; i < out_size; i++)
        {
            cout << output[i] << " ";
        }
        cout << endl;
        return;
    }

    //Recursion call to print subsets 
    //output array does not have subsets of elements with input[0]
    printSubsetsOfArray(input+1,size-1,output,out_size);

    //Recursion call to print subsets 
    //output array now have subsets of elements with input[0]
    output[out_size] = input[0];
    printSubsetsOfArray(input+1,size-1,output,out_size+1);
}
void printSubsetsOfArray(int input[], int size) 
{
	// Write your code here

    //To save output to print
    int output[size];
    printSubsetsOfArray(input,size,output,0);
}
