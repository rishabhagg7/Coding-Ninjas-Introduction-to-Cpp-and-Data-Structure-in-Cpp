/*
Given the number 'n', find out and return the number of digits present in a number recursively.
*/

int count(int n)
{
    //write your code here

    //Base Case
    if(n < 10)
    {
        return 1;
    }

    //Recursive Call with small work/calculation
    return 1 + count(n/10);
}
