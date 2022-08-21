/*
Given the number 'n', write a code to print numbers from 1 to n in increasing order recursively.
*/

void print(int n)
{
    //write your code here

    if(n == 0)
    { 
        return ;
    }

    //Recursive Call to print first n - 1 terms
    print(n-1);

    //Small Cal/Work to print nth number
    cout << n << " ";
}
