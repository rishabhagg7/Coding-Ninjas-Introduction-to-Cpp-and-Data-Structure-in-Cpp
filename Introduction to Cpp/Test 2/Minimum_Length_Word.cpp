/*
Given a string S (that can contain multiple words), you need to find the word which has 
minimum length.
Note : If multiple words are of same length, then answer will be first minimum length 
word in the string.
Words are seperated by single space only.
*/

/* input - Input String
*  output - Save the result in the output array (passed as argument). You don’t have to 
*  print or return the result
*/
#include<cstring>
void minLengthWord(char input[], char output[])
{
	// Write your code here	
	int min = strlen(input);
    int min_pos = 0;
    int len = 0;
    for(int i = 0; i <= strlen(input); i++)
    {
        //Word Found!!
        if(input[i] == ' ' || input[i] == '\0')
        {
            if(len < min)
            {
                min = len;
                min_pos = i - len;
            }
            len = 0; 
        }
        else
        {
            len++;
        }
    }

    //Filling Output Array
    for(int i = min_pos, j = 0; i <= min_pos+min; i++)
    {
        output[j++] = input[i];
    }
}


