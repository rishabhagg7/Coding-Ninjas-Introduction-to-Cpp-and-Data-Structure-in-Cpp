/*

Pattern for N = 4
...1
..12
.123
1234
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
    for(int i = 0; i < N; i++)
    {
        //Spaces
        for(int j = 0; j < N - i - 1; j++)
        {
            cout << " ";
        }

        for(int j = 0; j <= i; j++){
            cout << j+1;
        }
        cout << endl;
    }
    
    return 0;
}


