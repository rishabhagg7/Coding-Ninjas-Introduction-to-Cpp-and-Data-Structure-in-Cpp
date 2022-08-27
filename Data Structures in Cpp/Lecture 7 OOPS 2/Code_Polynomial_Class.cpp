/*
Implement a polynomial class, with the following properties and functions.
Properties :
1. An integer array (lets say A) which holds the coefficient and degrees. 
Use array indices as degree and A[i] as coefficient of ith degree.
2. An integer holding total size of array A.
Functions :
1. Default constructor
2. Copy constructor
3. setCoefficient -
This function sets coefficient for a particular degree value. 
If the given degree is greater than the current capacity of polynomial, 
increase the capacity accordingly and add then set the required coefficient. 
If the degree is within limits, then previous coefficient value is replaced by given coefficient value
4. Overload "+" operator (P3 = P1 + P2) :
Adds two polynomials and returns a new polynomial which has result.
5. Overload "-" operator (P3 = p1 - p2) :
Subtracts two polynomials and returns a new polynomial which has result
6. Overload * operator (P3 = P1 * P2) :
Multiplies two polynomials and returns a new polynomial which has result
7. Overload "=" operator (Copy assignment operator) -
Assigns all values of one polynomial to other.
8. print() -
Prints all the terms (only terms with non zero coefficients are to be printed) in 
increasing order of degree.
Print pattern for a single term : <coefficient>"x"<degree>
And multiple terms should be printed separated by space. And after printing one polynomial, 
print new line. For more clarity, refer sample test cases
*/


/*************
 Driver program to test below functions
 
int main()
{
    int count1,count2,choice;
    cin >> count1;
    
    int *degree1 = new int[count1];
    int *coeff1 = new int[count1];
    
    for(int i=0;i < count1; i++) {
        cin >> degree1[i];
    }
    
    for(int i=0;i < count1; i++) {
        cin >> coeff1[i];
    }
    
    Polynomial first;
    for(int i = 0; i < count1; i++){
        first.setCoefficient(degree1[i],coeff1[i]);
    }
    
    cin >> count2;
    
    int *degree2 = new int[count2];
    int *coeff2 = new int[count2];
    
    for(int i=0;i < count2; i++) {
        cin >> degree2[i];
    }
    
    for(int i=0;i < count2; i++) {
        cin >> coeff2[i];
    }
    
    Polynomial second;
    for(int i = 0; i < count2; i++){
        second.setCoefficient(degree2[i],coeff2[i]);
    }
    
    cin >> choice;
    
    Polynomial result;
    switch(choice){
            // Add
        case 1:
            result = first + second;
            result.print();
            break;
            // Subtract
        case 2 :
            result = first - second;
            result.print();
            break;
            // Multiply
        case 3 :
            result = first * second;
            result.print();
            break;
            
        case 4 : // Copy constructor
        {
            Polynomial third(first);
            if(third.degCoeff == first.degCoeff) {
                cout << "false" << endl;
            }
            else {
                cout << "true" << endl;
            }
            break;
        }
            
        case 5 : // Copy assignment operator
        {
            Polynomial fourth(first);
            if(fourth.degCoeff == first.degCoeff) {
                cout << "false" << endl;
            }
            else {
                cout << "true" << endl;
            }
            break;
        }
            
    }
    
    return 0;
}
****************/

class Polynomial {
    public:
    
    int *degCoeff;      // Name of your array (Don't change this)
    // Complete the class
    
    int total_size;  // total size of degCoeff array

    //Default Constructor
    Polynomial()
    {
        degCoeff = new int[5](); 
        // this will make a dynamically allocated array all initialised with 0

        total_size = 5;
    }
    
    //Copy Constructor
    Polynomial(Polynomial const &p2)
    {
        this -> degCoeff = new int[p2.total_size];
        for(int i = 0; i < p2.total_size; i++)
        {
            this -> degCoeff[i] = p2.degCoeff[i];
        }

        this -> total_size = p2.total_size;
    }
    
    //Set Coefficient
    void setCoefficient(int degree, int coefficient)
    {
        while(degree >= total_size)
        {
            int *newDegCoeff = new int[2*total_size]();
            // doubling the capacity and initialising the new Array with zero

            for(int i = 0; i < total_size; i++)
            {
                newDegCoeff[i] = degCoeff[i];
            }
            delete [] degCoeff;
            degCoeff = newDegCoeff;
            total_size *= 2;
        }
        degCoeff[degree] = coefficient;   
    }
    
    //Overload "+" operator
    Polynomial operator + (Polynomial &p2)
    {
        Polynomial pNew;
        /* 
        Here we want to add coefficients of similiar degree 
        Consider an example: 
        p1: 0x0 1x1 5x2
        p2: -1x0 0x1 0x2 9x3
        pNew: -1x0 1x1 5x2 (9+garbage)x3
        so we need to fill zeroes of smaller polynomial to avoid adding garbage
        so that p1: 0 1x 5x2 0x3
        */
        if(total_size > p2.total_size)
        {
            for(int i = p2.total_size; i < total_size; i++)
            {
				p2.setCoefficient(i,0);
            }
        }
        else
        {
            for(int i = total_size; i < p2.total_size; i++)
            {
				setCoefficient(i,0);
            }
        }
        for(int i = 0; i < max(total_size,p2.total_size); i++)
        {
			pNew.setCoefficient(i,this -> degCoeff[i] + p2.degCoeff[i]);
        }
        return pNew;
    }
    
    //Overload "-" operator
    Polynomial operator - (Polynomial &p2)
    {
        Polynomial pNew;
        /* 
        Here we want to subtract coefficients of similiar degree 
        Consider an example: 
        p1: 0x0 1x1 5x2 
        p2: -1x0 0x1 0x2 9x3
        pNew: 1x0 1x1 5x2 (garbage-9)x3
        so we need to fill zeroes of smaller polynomial to avoid adding garbage
        so that p1: 0 1x 5x2 0x3
        */
        if(total_size > p2.total_size)
        {
            for(int i = p2.total_size; i < total_size; i++)
            {
				p2.setCoefficient(i,0);
            }
        }
        else
        {
            for(int i = total_size; i < p2.total_size; i++)
            {
				setCoefficient(i,0);
            }
        }
        for(int i = 0; i < max(total_size,p2.total_size); i++)
        {
			pNew.setCoefficient(i,this -> degCoeff[i] - p2.degCoeff[i]);
        }
        return pNew;
    }
    
    //Overload "*" operator
    Polynomial operator * (Polynomial &p2){
        Polynomial pNew;
        /*
        For Example:
        p1: 1x0 2x1 4x2 
        p2: 3x0 1x1 -4x3
        To calculate multiplication:
        We will first mutiply 1x0 with all coefficients of p2 & store in p             
        p: 1x0 1x1 -4x3    <-----------------------------------------<-----|
        Then We will multiply 2x1 with all coefficients of p2 & store in p |
        p: 6x1 2x2 -8x4    <-----------------------------------------<-----|      
        Then we will multiply 4x2 with all coefficients of p2 & store in p |
        p: 12x2 4x3 -16x5  <-----------------------------------------<-----| 
        In final polynomial we need to add all the coefficients:           |
        so we will add p side by side:                                     | 
        pNew = pNew + temp;  // preserving old data and adding new data->-----|
        */
        for(int i = 0; i < this -> total_size; i++)
        {
            Polynomial temp; // to store multiplication of 1 term of 1st polynomial with all terms of 2nd polynomial 
            for(int j = 0; j < p2.total_size; j++)
            {
                temp.setCoefficient(i+j,this->degCoeff[i]*p2.degCoeff[j]);
                // powers of degree add on multiplication
            }
            pNew = pNew + temp;
        }
        return pNew;
    }

    //Overload "=" operator
    Polynomial operator = (Polynomial const &p2)
    {
        this -> degCoeff = new int[p2.total_size];
        for(int i = 0; i < p2.total_size; i++)
        {
            this -> degCoeff[i] = p2.degCoeff[i];
        }
        this -> total_size = p2.total_size;
    }

    //Print
    void print()
    {
        for(int i = 0; i < total_size; i++)
        {
            if(degCoeff[i] == 0)
            {
                continue;
            }
            cout << degCoeff[i] << "x" << i << " ";
        }
        cout << endl;
    }
};


  