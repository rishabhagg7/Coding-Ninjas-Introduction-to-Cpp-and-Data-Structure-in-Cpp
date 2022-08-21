/*
Given an integer N, count and return the number of zeros that are present in the 
given integer using recursion.
*/


int countZeros(int n) 
{
    // Write your code here

    //Base Case
	if(n < 10)
    {
        return n == 0;
    }
    
    //Recursive Call if zero found with small work/calculation
    if(n%10 == 0)
    {
        return 1 + countZeros(n/10);
    }

    //Recursive Call if zero not found
    return countZeros(n/10);
}


