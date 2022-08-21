/*
Given a string S, compute recursively a new string where identical chars that are 
adjacent in the original string are separated from each other by a "*".
*/

// Change in the given string itself. So no need to return or print the changed string.
#include<cstring>
void pairStar(char input[])
{
    // Write your code here
	int size = strlen(input);

    //Base Case
    if(size == 0 || size == 1)
    {
        return ;
    }

    //Small Work
    if(input[0] == input[1])
    {

        //Shifting to create space for star
        for(int i = size; i > 0; i--)
        {
            input[i+1] = input[i];
        }
        input[1] = '*';
    }


    //Recursive Call
    pairStar(input+1);
}
