/*
For a given input string(str), write a function to print all the possible substrings.
Substring
A substring is a contiguous sequence of characters within a string. 
Example: "cod" is a substring of "coding". Whereas, "cdng" is not as the characters 
taken are not contiguous
*/

void printSubstrings(char input[]) 
{
    // Write your code here
    for(int i = 0; i < strlen(input); i++)
    {
        for(int j = i; j < strlen(input); j++)
        {
            for(int k = i; k <= j; k++)
            {
            	cout << input[k];
            }
            cout << endl;
        }
    }
}