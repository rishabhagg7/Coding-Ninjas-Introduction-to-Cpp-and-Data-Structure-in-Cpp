/*

Write a program to calculate the total salary of a person. 
The user has to enter the basic salary (an integer) and the grade (an uppercase character), 
and depending upon which the total salary is calculated as -
    totalSalary = basic + hra + da + allow – pf
where :
hra   = 20% of basic
da    = 50% of basic
allow = 1700 if grade = ‘A’
allow = 1500 if grade = ‘B’
allow = 1300 if grade = ‘C' or any other character
pf    = 11% of basic.
Round off the total salary and then print the integral part only.
Note: Try finding out a function on the internet to do so

*/

#include<iostream>
#include<cmath>
using namespace std;

int main() {
	// Write your code here

    //Take Input
	double basic_salary;
    cin >> basic_salary;
    
    char grade;
    cin >> grade;
    
    // Calculation (double for higher accuracy)
    double hra, da, allow , pf;
    hra = (20.0*basic_salary)/100;
    da = (50.0*basic_salary)/100;
    pf = (11.0*basic_salary)/100;
    if(grade == 'A'){
        allow = 1700;
    }else if(grade == 'B'){
        allow = 1500;
    }else{
        allow = 1300;
    }
    double total_salary = basic_salary + hra + da + allow - pf;

    //Output (ans in integer)
    cout << (int)round(total_salary);
    
    return 0;
}


