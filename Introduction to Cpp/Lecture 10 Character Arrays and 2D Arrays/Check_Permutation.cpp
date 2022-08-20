/*
For a given two strings, 'str1' and 'str2', check whether they are a permutation of each 
other or not.
Permutations of each other
Two strings are said to be a permutation of each other when either of the string's 
characters can be rearranged so that it becomes identical to the other one.
Example: 
str1= "sinrtg" 
str2 = "string"
The character of the first string(str1) can be rearranged to form str2 and hence 
we can say that the given strings are a permutation of each other.
*/

bool isPermutation(char input1[], char input2[]) 
{
    // Write your code here

    //If strings are of different length they cannot be permutation of each other
    if(strlen(input1) != strlen(input2))
    {
        return false;
    }

    //Frequency array as no of characters in both strings will equal
    int freq[26] = {0};
    for(int i = 0; input1[i] != '\0'; i++)
    {
        freq[input1[i] - 'a']++;
        freq[input2[i] - 'a']--;
    }

    //Checking
    for(int i = 0; i < 26; i++)
    {
        //False condition
        if(freq[i] != 0){
            return false;
        }
    }
    return true;
}