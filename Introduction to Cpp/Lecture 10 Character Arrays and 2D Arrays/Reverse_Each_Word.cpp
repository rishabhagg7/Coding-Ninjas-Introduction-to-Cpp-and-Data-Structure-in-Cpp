/*
Aadil has been provided with a sentence in the form of a string as a function parameter. 
The task is to implement a function so as to print the sentence such that each word in the 
sentence is reversed.

Example:
Input Sentence: "Hello, I am Aadil!"
The expected output will print, ",olleH I ma !lidaA".
*/

void reverseEachWord(char input[]) 
{
    // Write your code here
    for(int i = 0,start = 0, end = 0; i <= strlen(input); i++)
    {
        //Finding a word to reverse
        if(input[i] == ' ' || input[i] == '\0')
        {
            end = i - 1;
            for(int j = start, k = end; k >= j; j++, k--)
            {
                swap(input[j],input[k]);
            }

            //Updating start so as to move on to next word
            start = i + 1;
        }
    }
}