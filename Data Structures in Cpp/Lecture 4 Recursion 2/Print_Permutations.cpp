/*
Given an input string (STR), print all possible permutations of the input string.
Note:
The input string may contain the same characters, so there will also be the same 
permutations.
The order of permutations doesn’t matter.
*/

#include <iostream>
#include <string>
using namespace std;
void printPermutations(string input,string output)
{
    //Base Case
    if(input.size() == 0)
    {
        cout << output << endl;
        return;
    }

    //Recursion Calls
    //Getting permutations by excluding element one by one and adding that element further
    //in the permutations so obtained to get the final output
    for(int i = 0; i < input.size(); i++)
    {
        printPermutations(input.substr(0,i)+input.substr(i+1),input[i]+output);
    }
}
void printPermutations(string input)
{

    /* Don't write main() function.
	 * Don't read input, it is passed as function argument.
	 * Print output as specified in the question
	*/

    printPermutations(input,"");
}
