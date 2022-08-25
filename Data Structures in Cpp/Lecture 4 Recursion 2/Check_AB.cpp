/*
Suppose you have a string, S, made up of only 'a's and 'b's. Write a recursive function that 
checks if the string was generated using the following rules:
a. The string begins with an 'a'
b. Each 'a' is followed by nothing or an 'a' or "bb"
c. Each "bb" is followed by nothing or an 'a'
If all the rules are followed by the given string, return true otherwise return false.
*/

#include<cstring>
bool checkAB(char input[]) 
{
	// Write your code here

    //Base Case
	int size = strlen(input);
    if(size == 0)
    {
        return true;
    }

    //If the string starts with 'a' then output can be true else false
    if(input[0] == 'a')
    {
        //If 'a' is followed by "bb" then output can be true else check smaller input
        if(input[1] == 'b' && input[2] == 'b')
        {
            //Recursion call to check smaller input
            return checkAB(input+3);
        }

        return checkAB(input+1);
    }
    return false;
}



