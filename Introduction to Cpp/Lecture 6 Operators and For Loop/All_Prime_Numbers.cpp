/*
Given an integer N, print all the prime numbers that lie in the range 2 to N 
(both inclusive).
Print the prime numbers in different lines.
*/

#include <iostream>
using namespace std;

int main()
{

    /* Read input as specified in the question.
	* Print output as specified in the question.
	*/

    //Take Input
  	int N;
    cin >> N;

    for(int i = 2; i <= N; i++)
    {
        //Calculation
        int j;
        for(j = 2; j < i; j++)
        {
            if(i%j == 0){
                break;
            }
        }

        //Output
        if(j == i){
            cout << i << endl;
        }
    }

    return 0;
}


