/*
Given a string S, remove consecutive duplicates from it recursively.
*/

#include<cstring>
void removeConsecutiveDuplicates(char *input) 
{
	/* Don't write main().
	* Don't read input, it is passed as function argument.    
	* Change in the given string itself.
	* No need to return or print anything
	* Taking input and printing output is handled automatically.
	*/

    //Base Case
	int size = strlen(input);
	if(size == 0 || size == 1)
    {
        return;
    }

    //Small Work or calculation
    if(input[0] == input[1])
    {
        for(int i = 0; i <= size; i++)
        {
            input[i] = input[i+1];
        }

        //Recurise Call when dupliacte found
        removeConsecutiveDuplicates(input);
    }

    //Recursive Call when duplicate not found
    removeConsecutiveDuplicates(input+1);
}