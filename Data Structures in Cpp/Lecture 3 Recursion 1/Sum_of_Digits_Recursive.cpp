/*
Write a recursive function that returns the sum of the digits of a given integer.
*/

int sumOfDigits(int n) 
{
    // Write your code here

    //Base Case
	if(n < 10)
    {
        return n;
    }

    //Small work/calculation with Recursive Call
    return n%10 + sumOfDigits(n/10);
}


