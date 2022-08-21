/*
Write a recursive function to convert a given string into the number it represents. 
That is input will be a numeric string that contains only numbers, you need to convert 
the string into corresponding integer and return the answer.
*/

#include<cstring>
int stringToNumber(char input[]) 
{
    // Write your code here
	int size = strlen(input);

    //Base Case
    if(size == 0)
    {
        return 0;
    }

    //Small Work/Calculation
    int smallNum = (input[size-1]-'0');
    input[size - 1] = '\0';    

    //Recursive Call
    return smallNum+10*stringToNumber(input);
}


