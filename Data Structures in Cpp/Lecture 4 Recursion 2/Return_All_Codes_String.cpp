/*
Assume that the value of a = 1, b = 2, c = 3, ... , z = 26. 
You are given a numeric string S. Write a program to return the list of all possible codes 
that can be generated from the given string.
Note : The order of codes are not important. And input string does not contain 0s.
*/

#include <string.h>
using namespace std;

int getCodes(string input, string output[10000]) 
{
    /*
    You are given the input text and output string array. Find all possible codes and store in the output string array. Don’t print the codes.
    Also, return the number of codes return to the output string. You do not need to print anything.
    */

    //Base Case
    int size = input.size();
    if(size == 0)
    {
        output[0] = "";
        return 1;
    }

    //Recursion Call
    //Getting all codes of smaller string
	int size1 = getCodes(input.substr(1),output);

    //converting the number to character and adding to codes of smaller string
    char c = 'a'+ input[0] - '1';
    for(int i = 0; i < size1; i++)
    {
        output[i] = c + output[i];
    }

    //To check for number > 9
    int size2 = 0;
     if(input[0] == '1')
     {
        if(input[1] >= '0' && input[1] <= '9')
        {
            c = 'a' + 10 + (input[1]-'1');
            size2 = getCodes(input.substr(2),output + size1);
            for(int j = 0; j < size2; j++)
            {
        		output[j+size1]=c+output[j+size1];
    		}
        }
    }
    else if(input[0] == '2')
    {
        if(input[1] >= '0' && input[1] <= '6')
        {
            c = 'a' + 20 + (input[1]-'1');
            size2 = getCodes(input.substr(2),output + size1);
            for(int j = 0; j < size2; j++)
            {
        		output[j+size1]=c+output[j+size1];
    		}
        }
    }
    return size1+size2;
}