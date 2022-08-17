/*
Print the following pattern for the given N number of rows.
Pattern for N = 4
1
21
321
4321
*/

#include<iostream>
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
        for(int j = 0; j <= i; j++)
        {
            cout << i+1-j;
        }

        cout << endl;
    }

    return 0;
}


