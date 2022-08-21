/*
Given two integers M & N, calculate and return their multiplication using recursion. 
You can only use subtraction and addition for your calculation. 
No other operators are allowed.
*/

int multiplyNumbers(int m, int n) 
{
    // Write your code here
    

    //Approach 1


	// if(m == 0 || n == 0){
	//     return 0;
	// }
	// return m + n - 1 + multiplyNumbers(m - 1, n -1);
    

    //Approach 2

    //Base Case
    if(n == 0)
    {
        return 0;
    }

    //Recursive Call with small calculation and work
    return m + multiplyNumbers(m,n-1);
}


