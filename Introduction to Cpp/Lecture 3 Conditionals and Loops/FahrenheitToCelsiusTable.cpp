/*
Given three values - Start Fahrenheit Value (S), End Fahrenheit value (E) and Step Size (W), 
you need to convert all Fahrenheit values from Start to End at the gap of W, into their 
corresponding Celsius values and print the table.
*/


#include<iostream>
using namespace std;


int main(){

       /*  Read input as specified in the question.
	* Print output as specified in the question.
	*/

    //Take input
    int S,E,W;
    cin >> S >> E >> W;

    //Calculation && Output
    for(int i = S; i <= E; i = i + W){
        cout << i << " " << (int)((i-32)*(5.0))/9 << endl; 
    }
}


