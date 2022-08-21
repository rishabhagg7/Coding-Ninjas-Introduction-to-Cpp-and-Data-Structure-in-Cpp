/*
Given a string, compute recursively a new string where all 'x' chars have been removed.
*/

// Change in the given string itself. So no need to return or print anything

#include<cstring>
void removeX(char input[]) 
{
    // Write your code here
	int size = strlen(input);

    //Base Case
    if(size == 0)
    {
        return;
    }

    //Small Calculation
    if(input[0] == 'x')
    {
        
        //Shifting
        for(int i = 0; i <= size; i++)
        {
            input[i] = input[i+1];
        }

        //Recursive Call when x found
        removeX(input);
    }

    //Recursive Call when x does not found
  	removeX(input+1);  
}
