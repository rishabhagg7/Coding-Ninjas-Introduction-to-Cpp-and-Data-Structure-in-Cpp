/*
For a given two-dimensional integer array/list of size (N x M), print it in a spiral form. 
That is, you need to print in the order followed for every iteration:
a. First row(left to right)
b. Last column(top to bottom)
c. Last row(right to left)
d. First column(bottom to top)
Mind that every element will be printed only once.
*/

void spiralPrint(int **input, int nRows, int nCols)
{
    //Write your code here

    //Set variables for boundry
    int top = 0;
    int left = 0;
    int bottom = nRows - 1;
    int right = nCols - 1;
    int count = 0;

    //Iterate using given boundry variables and change boundry values accordingly
    while(count < nRows * nCols)
    {
        for(int j = left; j <= right && count < nRows * nCols; j++)
        {
            count++;
            cout << input[top][j] << " ";
        }
        top++;
        for(int i = top; i <= bottom && count < nRows * nCols; i++)
        {
            count++;
            cout << input[i][right] << " ";
        }
        right--;
        for(int j = right; j >= left && count < nRows * nCols; j--)
        {
            count++;
            cout << input[bottom][j] << " ";
        }
        bottom--;
        for(int i = bottom; i >= top && count < nRows * nCols; i--)
        {
            count++;
            cout << input[i][left] << " ";
        }
        left++;
    }
}