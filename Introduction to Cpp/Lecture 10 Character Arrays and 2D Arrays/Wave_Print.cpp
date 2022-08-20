/*
For a given two-dimensional integer array/list of size (N x M), print the array/list 
in a sine wave order, i.e, print the first column top to bottom, next column bottom 
to top and so on.
*/

void wavePrint(int **input, int nRows, int mCols)
{
    //Write your code here
    for(int j = 0; j < mCols; j++)
    {
        if(j%2 == 0)
        {
            //Traverse downward
            for(int i = 0; i < nRows; i++)
            {
                cout<< input[i][j] <<" ";
            }
        }
        else
        {
            //Traverse upward
            for(int i = nRows - 1 ; i >= 0; i--)
            {
                cout << input[i][j] << " ";
            }
        }
    }
}