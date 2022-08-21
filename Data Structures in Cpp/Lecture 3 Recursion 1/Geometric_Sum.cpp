/*
Given k, find the geometric sum i.e.
1 + 1/2 + 1/4 + 1/8 + ... + 1/(2^k) 
using recursion.
*/


double geometricSum(int k) 
{
    // Write your code here

    //Base Case
    if(k == 0)
    {
        return 1;
    }

    //Recursive Call with small work / calculation
	return pow(0.5,k) + geometricSum(k-1);
}


