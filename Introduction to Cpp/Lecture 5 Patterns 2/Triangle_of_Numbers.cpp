/*
Print the following pattern for the given number of rows.
Pattern for N = 4
...1
..232
.34543
4567654
The dots represent spaces.
*/

#include <iostream>
using namespace std;

int main() 
{
     /*  Read input as specified in the question.
     * Print output as specified in the question.
     */
    
    //Take Input
    int N;
    cin >> N;
    
    //Output
    for(int i = 0; i < N; i++)
    {
        //Spaces
        for(int j = 0; j < N - i - 1; j++)
        {
            cout << " ";
        }

        //Numebers in increasing order
        for(int j = 0; j <= i; j++){
            cout << i + j + 1;
        }

        //Numbers in decreasing order
        for(int j = 0; j < i; j++){
            cout << 2*i - j;
        }

        cout << endl;
    }
    
    return 0;
}
