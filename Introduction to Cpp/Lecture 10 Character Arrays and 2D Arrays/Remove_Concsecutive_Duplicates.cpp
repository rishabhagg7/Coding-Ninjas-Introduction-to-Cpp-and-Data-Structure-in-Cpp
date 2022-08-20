/*
For a given string(str), remove all the consecutive duplicate characters.
Example:
Input String: "aaaa"
Expected Output: "a"

Input String: "aabbbcc"
Expected Output: "abc"
*/
void removeConsecutiveDuplicates(char input[]) 
{
    // Write your code here

    //Iterator
    //Push different characters to beginning
    int pos = 0;

    for(int i = 0; input[i] != '\0'; i++)
    {
        if(input[i] != input[pos])
        {
            //Swapping
            char ch = input[i];
            input[i] = input[++pos];
            input[pos] = ch;   
        }
    }
    input[++pos] = '\0';
}