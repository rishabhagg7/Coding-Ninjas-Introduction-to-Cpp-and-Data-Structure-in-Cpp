/*
Given a string S, find and return all the possible permutations of the input string.
Note 1 : The order of permutations is not important.
Note 2 : If original string contains duplicate characters, permutations will also be duplicates.
*/

#include <string>
using namespace std;

int returnPermutations(string input, string output[])
{
   	/* Don't write main() function.
	 * Don't read input, it is passed as function argument.
	 * Print output as specified in the question
	*/

    //Base Case
    if(input.size() == 0)
    {
        output[0] = "";
        return 1;
    }

    int k = 0;
    string smallOutput[10000];

    //Recursion Calls
    //Getting permutations by excluding element one by one and adding that element further
    //in the permutations so obtained to get the final output
    for(int i = 0; i < input.size(); i++)
    {
        int size = returnPermutations(input.substr(0,i) + input.substr(i+1),smallOutput);
        for(int j = 0; j < size; j++)
        {
            output[k++] = input[i] + smallOutput[j];
        }
    }
    return k;
}
