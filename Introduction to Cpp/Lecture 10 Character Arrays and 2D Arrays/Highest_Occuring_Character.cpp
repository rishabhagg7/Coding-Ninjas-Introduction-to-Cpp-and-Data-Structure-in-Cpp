/*
For a given a string(str), find and return the highest occurring character.
Example:
Input String: "abcdeapapqarr"
Expected Output: 'a'
Since 'a' has appeared four times in the string which happens to be the highest frequency 
character, the answer would be 'a'.
If there are two characters in the input string with the same frequency, return the 
character which comes first.
*/

char highestOccurringChar(char input[]) 
{
    // Write your code here

    //frequency array to count no of characters
    int freq[26] = {0};
    for(int i = 0; input[i] != '\0'; i++)
    {
        freq[input[i] - 'a']++;
    }

    //Finding first most occuring character
    int max = 0;
    char ch;
    for(int i = 0; input[i] != '\0'; i++)
    {
        if(freq[input[i] - 'a'] > max)
        {
            max = freq[input[i] - 'a'];
            ch = input[i];
        }
    }
    return ch;
}