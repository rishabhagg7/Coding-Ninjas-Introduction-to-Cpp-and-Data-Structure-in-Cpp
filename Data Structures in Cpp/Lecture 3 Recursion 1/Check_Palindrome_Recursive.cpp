/*
Check whether a given String S is a palindrome using recursion. Return true or false.
*/

#include<cstring>
bool checkPalindrome(char input[]) 
{
    // Write your code here

    //Base Case
	if(strlen(input) == 0 || strlen(input) == 1)
    {
        return true;
    }
    if(input[0] != input[strlen(input) - 1])
    {
        return false;
    }

    //Small work/calculation
    input[strlen(input) - 1] = '\0';

    //Recursive Call
    return checkPalindrome(input+1);
}


