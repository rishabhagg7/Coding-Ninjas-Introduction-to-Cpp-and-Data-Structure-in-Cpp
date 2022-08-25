/*
Assume that the value of a = 1, b = 2, c = 3, ... , z = 26. 
You are given a numeric string S. Write a program to print the list of all possible codes 
that can be generated from the given string.
Note : The order of codes are not important. Just print them in different lines.
*/

#include <string.h>
using namespace std;
void printAllPossibleCodes(string input,string output)
{
    //Base Case
    if(input.size() == 0)
    {
        cout << output << endl;
        return;
    }

    //Coverting number/digit to character
    char ch = 'a' + input[0] - '1';

    //Recursion call 
    printAllPossibleCodes(input.substr(1),output+ch);

    //To check for number > 9
    if(input[0] == '1')
    {
        if(input[1] >= '0' && input[1] <= '9')
        {
            char ch = 'a' + 10 + input[1] - '1';
     		printAllPossibleCodes(input.substr(2),output+ch);       
        }
    }
    else if(input[0] == '2')
    {
        if(input[1] >= '0' && input[1] <= '6')
        {
            char ch = 'a' + 20 + input[1] - '1';
     		printAllPossibleCodes(input.substr(2),output+ch);
        }
    }
}
void printAllPossibleCodes(string input) 
{
    /*
    Given the input as a string, print all its possible combinations. You do not need to return anything.
    */
    printAllPossibleCodes(input,"");
}

