/*
For a given a string(str) and a character X, write a function to remove all the 
occurrences of X from the given string.
The input string will remain unchanged if the given character(X) doesn't exist 
in the input string.
*/

void removeAllOccurrencesOfChar(char input[], char c) 
{
    // Write your code here

    //Push the given character in the end
    int pos = 0;
    for(int i = 0; input[i] != '\0'; i++)
    {
        if(input[i] != c)
        {
            swap(input[pos++],input[i]);
        }
    }

    //Removing the given character from string
    input[pos] = '\0';
}
