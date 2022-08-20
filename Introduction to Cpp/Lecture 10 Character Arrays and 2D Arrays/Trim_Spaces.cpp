/*
Given an input string S that contains multiple words, you need to remove all the spaces 
present in the input string.
There can be multiple spaces present after any word.
*/
void trimSpaces(char input[]) 
{
    // Write your code here

    //Iterator
    int itr = 0;
    for(int i = 0; input[i] != '\0'; i++)
    {
        //Pushing Spaces to End
        if(input[i] != ' ')
        {
            swap(input[i],input[itr++]);
        }
    }
    input[itr] = '\0';
}