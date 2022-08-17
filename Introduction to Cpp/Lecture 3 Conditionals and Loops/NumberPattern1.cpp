/*
Print the following pattern
Pattern for N = 4
1
23
345
4567
*/

#include<iostream>
using namespace std;


int main()
{

       /*  Read input as specified in the question.
	* Print output as specified in the question.
	*/

    //Take Output
	int N;
    cin >> N;
    
    //Output
    for(int i = 0; i < N; i++){

        for(int j = 0; j <= i; j++)
        {
            cout << i + j + 1;
        }

        cout << endl;
    }

    return 0;
}


