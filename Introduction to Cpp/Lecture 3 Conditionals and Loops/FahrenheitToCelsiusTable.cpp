/*
Given three values - Start Fahrenheit Value (S), End Fahrenheit value (E) and Step Size (W), 
you need to convert all Fahrenheit values from Start to End at the gap of W, into their 
corresponding Celsius values and print the table.
*/


#include<iostream>
using namespace std;


int main()
{

       /*  Read input as specified in the question.
	* Print output as specified in the question.
	*/

    //Take input
    int S,E,W;
    cin >> S >> E >> W;

    //Calculation && Output
    //We will convert the temperature in Celcius in float type and convert it into integer
    for(int i = S; i <= E; i = i + W)
    {
        int cel = ((i - 32)*5.0)/9;
        // implicit type casting will be done by compiler from float to int datatype

        //Output
        cout << i << " " << cel << endl; 
    }
    return 0;
}


