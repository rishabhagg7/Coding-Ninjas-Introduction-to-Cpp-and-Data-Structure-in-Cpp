/*
Write a program to do basic string compression. For a character which is consecutively 
repeated more than once, replace consecutive duplicate occurrences with the count of 
repetitions.
Example:
If a string has 'x' repeated 5 times, replace this "xxxxx" with "x5".
The string is compressed only when the repeated character count is more than 1.
*/

string getCompressedString(string &input)
{
    // Write your code here.

    //Calculation of length of the string
    int len = 0;
    for(int i = 0; input[i] != '\0'; i++)
    {
        len++;
    }

    int num = 1,pos = 1;
    for(int i = 1; i <= len; i++)
    {
        //Calculating how many times the character is repeating adjacent 
        if(input[i-1] == input[i])
        {
            num++;
        }
        else
        {
            //Replacing with number character
            if(num > 1)
            {
             	input[pos++] = '0' + num;  
                num = 1;
            }

            //Replacing for next character if it not last character
            if(i != len)
            {
            	input[pos++] = input[i];
            }
            
        }
    }
    input = input.substr(0,pos);
    return input;
}