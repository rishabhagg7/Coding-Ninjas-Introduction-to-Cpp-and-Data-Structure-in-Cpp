/*
Given a 2D integer array of size M*N, find and print the sum of ith column elements 
separated by space.
*/

#include<iostream>
using namespace std;


int main()
{

    /*  Read input as specified in the question.
	* Print output as specified in the question.
	*/

    //Take Input
    int m,n;
    cin >> m >> n;
  	int a[m][n];
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }

    //Calulation and Output
    for(int j = 0; j < n; j++)
    {
        int sum = 0;
        for(int i = 0; i < m; i++)
        {
            sum += a[i][j];
        }
        cout << sum << " ";
    }

    return 0;
}


