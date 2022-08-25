/*
Given an integer n, using phone keypad find out all the possible strings that can be made 
using digits of input n.
Return empty string for numbers 0 and 1.
Note : 1. The order of strings are not important.
2. Input and output has already been managed for you. You just have to populate the 
output array and return the count of elements populated in the output array.
*/

#include <string>
using namespace std;

//Letters according to keypad 
string pad[] = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};

int keypad(int num, string output[])
{
    /* Insert all the possible combinations of the integer number into the output string array. You do not need to
    print anything, just return the number of strings inserted into the array.
    */
	 //Base Case
    if(num == 0 || num == 1)
    {
        output[0] = "";
        return 1;
    }

    //Recursive call to get smaller output
    int small_size = keypad(num/10,output);

    //Small Calulation / Work or Adding current digit to smaller output
    int digit = num%10;
    int new_size = small_size * pad[digit].size();

    //Changes made in new string array
    string new_output[new_size];
    int k = 0;
    for(int i = 0; i < small_size; i++)
    {
        for(int j = 0; j < pad[digit].size(); j++){
        {
            new_output[k++] = output[i] + pad[digit][j];
        }
    }

    //Copying changes in the output array
    for(int i = 0; i < new_size; i++)
    {
        output[i] = new_output[i];
    }
    return new_size;
}
