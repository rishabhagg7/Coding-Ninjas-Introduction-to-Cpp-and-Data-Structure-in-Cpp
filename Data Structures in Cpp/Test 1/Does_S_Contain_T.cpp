/*
Given two string s and t, write a function to check if s contains all characters of t 
(in the same order as they are in string t).
Return true or false.
Do it recursively.
E.g. : s = “abchjsgsuohhdhyrikkknddg” contains all characters of t=”coding” in the same order. 
So function will return true.
*/

#include<cstring>
bool checksequenece(char large[] , char*small) 
{

    //Base Case
	if(strlen(large) == 0)
    {
        if(small[0] == '\0')
        {
            return true;
        }
        return false;
    }

    //Recursion Calls
    if(large[0] == small[0])
    {
        return checksequenece(large+1,small+1);
    }
    return checksequenece(large+1,small);
}
