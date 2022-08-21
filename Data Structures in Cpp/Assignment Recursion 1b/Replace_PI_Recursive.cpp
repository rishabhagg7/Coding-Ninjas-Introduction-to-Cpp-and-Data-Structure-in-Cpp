/*
Given a string, compute recursively a new string where all appearances of "pi" have been replaced by "3.14".
*/

// Change in the given string itself. So no need to return or print anything
#include<cstring>
void replacePi(char input[]) 
{
	// Write your code here
	int size = strlen(input);

    //Base Case
    if(size == 0 || size == 1)
    {
        return;
    }

    //Small Work / Calculation
    if(input[0] == 'p' && input[1] == 'i')
    {

        //Shifting to create space for "3.14"
        for(int i = size; i > 1; i--)
        {
            input[i+2] = input[i];
        }

        //Filling position with "3.14"
        input[0] = '3';
        input[1] = '.';
        input[2] = '1';
        input[3] = '4';

        //Recursive Call when "pi" found
        replacePi(input+4);
		return;    
    }

    //Recursive Call 
    replacePi(input+1);
}


