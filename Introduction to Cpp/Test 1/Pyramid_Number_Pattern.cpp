/*
Print the following pattern for the given number of rows.
Pattern for N = 4
   1
  212
 32123
4321234
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

        //Spaces
        for(int j = 0; j < N - i - 1; j++)
        {
            cout << " ";
        }

        //Decreasing Part
        for(int j = 0; j <= i; j++)
        {
            cout << i + 1 - j;
        }

        //Increasing Part
        for(int j = 0; j < i; j++)
        {
            cout << j+2;
        }
        cout << endl;
    }
    
    rerturn 0;
}

