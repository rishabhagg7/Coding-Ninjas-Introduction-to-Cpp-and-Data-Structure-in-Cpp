/*
Given three values - Start Fahrenheit Value (S), End Fahrenheit value (E) and Step Size (W), 
you need to convert all Fahrenheit values from Start to End at the gap of W, into their 
corresponding Celsius values and print the table.
*/

void printTable(int start, int end, int step) 
{
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Print output and don't return it.
     * Taking input is handled automatically.
     */
    for(int i = start; i <= end; i = i + step) 
    {
        //Output
        cout << i << "\t" << (int)((5.0*(i-32))/9) << endl;
        // explicit type conversion from float to int
    }
}


