/*
Print the following pattern for given number of rows.
Sample Input :
   5
Sample Output :
1234554321
1234**4321
123****321
12******21
1********1
*/

#include<iostream>
using namespace std;


int main()
{

  // Write your code here

    //Take Input
	int N;
    cin >> N;

    //Output
    for(int i = 0; i < N; i++)
    {
        
        //Increasing Part
        for(int j = 0; j < N - i; j++)
        {
            cout << j + 1;
        }

        //Star
        for(int j = 0; j < 2*i; j++)
        {
            cout << "*";
        }

        //Decreasing Part
        for(int j = 0; j < N - i;j++)
        {
            cout << N - j - i;
        }
        cout << endl;
    }
    return 0;
}


