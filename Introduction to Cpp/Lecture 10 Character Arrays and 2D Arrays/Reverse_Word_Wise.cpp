/*
Reverse the given string word wise. That is, the last word in given string should come 
at 1st place, last second word at 2nd place and so on. Individual words should remain as 
it is.
*/
#include<cstring>
void reverseStringWordWise(char input[]) 
{
    // Write your code here

    //Reversing the whole string
    for(int i = 0, j = strlen(input) - 1; j > i; i++, j--)
    {
        char ch = input[i];
        input[i] = input[j];
        input[j] = ch;
    }

    //Reversing word by word
    for(int i = 0, start = 0, end = 0; i <= strlen(input); i++)
    {
        if(input[i] == ' ' || input[i] == '\0')
        {
            end = i - 1;
            for(int j = start, k = end; k > j ; j++, k--)
            {
                //Swapping
                char ch = input[k];
                input[k] = input[j];
                input[j] = ch;
            }
            start = i + 1;  
        }
    }
}