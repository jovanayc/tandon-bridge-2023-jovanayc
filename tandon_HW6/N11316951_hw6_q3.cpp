// Jovanay Carter, NetID N113169951, Bridge Winter 2023,
// Homework 6, Question 3, Feb 16, 20233

/* Prompt: Write a program with a function eApprox that returns an
    approximation of e, calculated by the sum of the first (n+1) addends of the infinite sum.
*/
#include <iostream>
using namespace std;

double eApprox (int num);
double factorial (int factNum);

int main (){
    int n; //user input variable 

    cout << "Please enter a positive integer: ";
    cin >> n;

    cout.precision(30);
    cout << "n = " << n << '\t' << "Approximation of e: " << eApprox(n) << endl;

    return 0;
}

//Defining eApprox function with run time of 0(n)
double eApprox (int num){
    double eOutput = 1; // starting e with 1
    
    //loop that adds all fractions with factorials to e
    for(int i=1; i<=num; i++){
        eOutput += (1 / factorial(i));
    }

    return eOutput;
}

//Definining factorial function
double factorial (int factNum){
    double factOutput = 1;

    //loop to multiply all numbers until n is reached
    for (int i=1; i<=factNum; i++){
        factOutput *= i; 
    }
    
    return factOutput;
}

//TBD: What is the run time of eApprox if it has a function called within?