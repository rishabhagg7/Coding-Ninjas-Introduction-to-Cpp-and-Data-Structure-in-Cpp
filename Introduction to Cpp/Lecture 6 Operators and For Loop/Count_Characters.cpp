/*
Write a program to count and print the total number of characters 
(lowercase english alphabets only), digits (0 to 9) and white spaces (single space, tab 
i.e. '\t' and newline i.e. '\n') entered till '$'.
That is, input will be a stream of characters and you need to consider all the characters 
which are entered till '$'.
Print count of characters, count of digits and count of white spaces respectively 
(separated by space).
*/

#include<iostream>
using namespace std;

int main()
{

    /* Read input as specified in the question.
	 * Print output as specified in the question.
	*/
    
    //Take Input 
    char ch;
    ch = cin.get();
    int number_of_characters = 0, number_of_digits = 0, number_of_space = 0;

    //Counting
    while(ch != '$')
    {
        if(ch >= 'a' && ch <= 'z'){
            number_of_characters++;
        }else if(ch >= '0' && ch <= '9'){
            number_of_digits++;
        }else if(ch == ' ' || ch == '\t' || ch == '\n'){
            number_of_space++;
        }
        ch = cin.get();
    }

    //Output
    cout << number_of_characters << " " << number_of_digits << " " << number_of_space;
    return 0;
}


