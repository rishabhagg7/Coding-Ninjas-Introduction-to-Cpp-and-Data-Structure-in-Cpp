/*
Print the following pattern for the given N number of rows.
Pattern for N = 4
A
BC
CDE
DEFG
*/

#include<iostream>
using namespace std;


int main()
{

    /* Read input as specified in the question.
	*  Print output as specified in the question.
	*/
    
    //Take Input
    int N;
    cin >> N;
    
    for(int i = 0; i < N; i++)
    {
        char ch = 'A' + i;

        for(int j = 0; j <= i; j++)
        {
            cout << ch++;
        }
        
        cout << endl;
    }

    return 0;
}


