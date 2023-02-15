// Jovanay Carter, NetID N113169951, Bridge Winter 2023,
// Homework 6, Question 1, Feb 15, 20233

/* Prompt: Create a function using fibonacci sequence */

#include <iostream>
using namespace std;

int fib(int n);//initialize function

int main(){//call main function
    //set variables
    double num; 
    int nFib;

    //take user input
    cout<<"Please enter a positive integer: ";
    cin>>num;

    //sent user input through fib function
    nFib = fib(num);
    cout<<"Fibonacci sequence is "<<nFib<<endl;

    //end function
    return 0;
}

int fib(int n){ //defining the function
    int solution, i, oneBefore, twoBefore;
    
    solution = 0;
    oneBefore = 0;
    twoBefore = 0; //fn-1 + fn-2 = fn

    for (i=0; i<n; i++){
        if (i==0){
        solution = i+1;
        oneBefore = solution;
        cout<<"Solution: "<<solution<<endl;
        } else {   
            solution = oneBefore+twoBefore;
            twoBefore = oneBefore;
            oneBefore = solution;
            cout<<"Solution: "<<solution<<endl;
            }
    } 
    return solution;
}