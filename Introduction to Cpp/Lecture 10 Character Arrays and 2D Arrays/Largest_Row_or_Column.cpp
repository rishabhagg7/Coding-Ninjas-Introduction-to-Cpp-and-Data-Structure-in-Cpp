/*
For a given two-dimensional integer array/list of size (N x M), you need to find out 
which row or column has the largest sum(sum of all the elements in a row/column) amongst 
all the rows and columns.
Note :
If there are more than one rows/columns with maximum sum, consider the row/column that 
comes first. And if ith row and jth column has the same largest sum, consider the ith 
row as answer.

Consider :
If there doesn't exist a sum at all then print "row 0 -2147483648", where -2147483648 or 
-2^31 is the smallest value for the range of Integer.
*/

#include<climits>
void findLargest(int **input, int nRows, int mCols)
{
    //Write your code here

    int maxrowsum = INT_MIN, maxrowindex = 0, maxcolsum = INT_MIN, maxcolindex = 0;

    //Row wise sum
    for(int i = 0; i < nRows; i++)
    {
        int sum = 0;
        for(int j = 0; j < mCols; j++)
        {
            sum = sum + input[i][j];
        }
        if(sum > maxrowsum)
        {
            maxrowsum = sum;
            maxrowindex = i;
        }
    }

    //Column wise sum
    for(int j = 0;j < mCols; j++)
    {
        int sum = 0;
        for(int i = 0 ; i < nRows ; i++){
            sum = sum + input[i][j];
        }
        if(sum > maxcolsum)
        {
            maxcolsum = sum;
            maxcolindex = j;
        }
    }

    //Output
    if(maxrowsum == INT_MIN)
    {
        cout << "row" << " " << maxrowindex << " " << maxrowsum;
    }
    else if(maxrowsum >= maxcolsum)
    {
        cout<< "row" << " " << maxrowindex <<" "<< maxrowsum;
    }
    else
    {
        cout << "column" << " " << maxcolindex << " " << maxcolsum;
    }

    return 0;
}