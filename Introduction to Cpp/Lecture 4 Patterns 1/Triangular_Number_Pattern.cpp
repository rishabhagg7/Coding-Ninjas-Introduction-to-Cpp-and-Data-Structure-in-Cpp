/*
Print the following pattern for the given N number of rows.
Pattern for N = 4
1
22
333
4444
*/

#include<iostream>
using namespace std;

int main()
{

    /*  Read input as specified in the question.
	* Print output as specified in the question.
	*/

    //Take input
    int N;
    cin >> N;

    //Output
    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j <= i; j++)
        {
            cout << i+1;
        }

        cout << endl;
    }

    return 0;
}


