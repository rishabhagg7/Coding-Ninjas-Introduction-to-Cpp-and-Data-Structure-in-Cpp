/*
Given an integer n, using phone keypad find out and print all the possible strings that 
can be made using digits of input n.
Note : The order of strings are not important. Just print different strings in new lines.
*/

#include <iostream>
#include <string>
using namespace std;

//Letters according to keypad  
string pad[] = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};

void printKeypad(int num,string output)
{
    //Base Case
    if(num == 0 || num == 1)
    {
        cout << output << endl;
        return;
    }

    //Recursion call to add letters of current digit to smaller output with one less digit
    int digit = num%10;
    for(int i = 0; i < pad[digit].size(); i++)
    {
        printKeypad(num/10,pad[digit][i] + output);
    }
}

void printKeypad(int num)
{
    /*
    Given an integer number print all the possible combinations of the keypad. You do not need to return anything just print them.
    */

    //Helper function to save single line output
    printKeypad(num,"");
}