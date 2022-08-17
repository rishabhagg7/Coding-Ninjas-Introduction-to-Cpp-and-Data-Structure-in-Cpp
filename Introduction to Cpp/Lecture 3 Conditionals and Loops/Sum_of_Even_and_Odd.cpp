/*
Write a program to input an integer N and print the sum of all its even digits 
and sum of all its odd digits separately.
Digits mean numbers, not the places! That is, if the given integer is "13245", 
even digits are 2 & 4 and odd digits are 1, 3 & 5.
*/

#include<iostream>
using namespace std;

int main() {
	// Write your code here

    //Take input
	int N;
    cin >> N;
    
    //Calculation
    int Sum_of_Even_Digits = 0;
    int Sum_of_Odd_Digits = 0;
    for(int i = N; i > 0; i = i / 10){
        if((i%10)%2 == 0){
            Sum_of_Even_Digits += i%10;
        }else{
            Sum_of_Odd_Digits += i%10;
        }
    }

    //Output
    cout << Sum_of_Even_Digits << " " << Sum_of_Odd_Digits;
    return 0;
}
