/*
Given a string, determine if it is a palindrome, considering only alphanumeric characters.
Palindrome
A palindrome is a word, number, phrase, or other sequences of characters which read the 
same backwards and forwards.
*/

bool checkPalindrome(char str[]) 
{
    // Write your code here
    for(int i = 0, j = strlen(str) - 1; j > i; i++, j--)
    {
        //False Condition
        if(str[i] != str[j])
        {
            return false;
        }
    }

    //No false condition found
    return true;
}
