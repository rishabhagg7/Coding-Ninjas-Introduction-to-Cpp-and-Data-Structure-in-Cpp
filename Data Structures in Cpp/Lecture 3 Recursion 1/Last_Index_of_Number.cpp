/*
Given an array of length N and an integer x, you need to find and return the last index
of integer x present in the array. Return -1 if it is not present in the array.
Last index means - if x is present multiple times in the array, return the index at 
which x comes last in the array.
You should start traversing your array from 0, not from (N - 1).
Do this recursively. Indexing in the array starts from 0.
*/

int lastIndex(int input[], int size, int x) {
  /* Don't write main().
     Don't read input, it is passed as function argument.
     Return output and don't print it.
     Taking input and printing output is handled automatically.
  */

    //right to left approach

	// if(size == 0){
	//     return -1;
	// }
	// if(input[size - 1] == x){
	//     return size - 1;
	// }
	// int check = lastIndex(input,size-1,x);
	// if(check == -1){
	//      return -1;
	// }
	// return check;
    

    //left to right approach

    //Base Case
    if(size == 1)
    {
        if(input[0] == x)
        {
            return 0;
        }

        return -1;
    }

    //Recursive Call
    int check = lastIndex(input+1,size-1,x);

    //Small Work or Calculation
    if(check == -1)
    {
        if(input[0] == x)
        {
            return 0;
        }
        return -1;
    }
    return 1 + check;
}
