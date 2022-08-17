/*
Print the following pattern
Pattern for N = 4
...*
..***
.*****
*******
The dots represent spaces.
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
    for(int i = 0 ; i < N; i++)
    {
        //spaces
        for(int j = 0; j < N - i - 1; j++){
            cout << " ";
        }

        //star
        for(int j = 0; j < 2*i+1; j++){
            cout << "*";
        }

        //line change
        cout << endl;
    }
    return 0;
}


