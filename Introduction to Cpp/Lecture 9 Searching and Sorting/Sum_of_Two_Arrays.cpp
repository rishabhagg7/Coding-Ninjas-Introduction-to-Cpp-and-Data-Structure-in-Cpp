/*
Two random integer arrays/lists have been given as ARR1 and ARR2 of size N and M 
respectively. Both the arrays/lists contain numbers from 0 to 9(i.e. single digit integer 
is present at every index). The idea here is to represent each array/list as an integer in 
itself of digits N and M.
You need to find the sum of both the input arrays/list treating them as two integers and 
put the result in another array/list i.e. output array/list will also contain only single 
digit at every index.
*/

void sumOfTwoArrays(int *input1, int size1, int *input2, int size2, int *output)
{
    //Write your code here
    int carry = 0;
    int i, j , k;
    for(i = size1 - 1, j = size2 - 1, k = max(size1,size2); i >= 0 && j >= 0;i--,j--,k--)
    {
        int digit = (carry + input1[i] + input2[j])%10;
        carry = (carry + input1[i] + input2[j])/10;
        output[k] = digit;
    }

    //Remaining Places (if left)
    while(i >= 0)
    {
        int digit = (carry + input1[i])%10;
        carry = (carry + input1[i])/10;
        output[k--] = digit;
        i--;
    }
    while(j >= 0)
    {
        int digit = (carry + input2[j])%10;
        carry = (carry + input2[j])/10;
        output[k--] = digit;
        j--;
    }

    //Possible if there is still some carry number left
    if(carry == 1)
    {
        output[k] = carry;
    }
}