//Jovanay Carter, NetID N113169951, Bridge Winter 2023
//Homework 2, Question 4, January 20, 2023

#include <iostream>
#include <cmath>
using namespace std;

int main(){
    //set variables
    int x, y, add, subtract, multiply, div, mod;
    double divide;

    //user input
    cout << "Please enter two positive integers, separated by a space: " << endl;
    cin >> x >> y;

    //math
    add = x + y;
    subtract = x - y;
    multiply = x * y;
    divide = (double)x / y; //added double before x to get full value including decimals when dividing
    div = x / y;
    mod = x % y;

    // print math outputs
    cout << x << " + " << y << " = " << add <<endl;
    cout << x << " - " << y << " = " << subtract <<endl;
    cout << x << " * " << y << " = " << multiply <<endl;
    cout << x << " / " << y << " = " << divide <<endl;
    cout << x << " div " << y << " = " << div <<endl;
    cout << x << " mod " << y << " = " << mod <<endl;
    
    //end function
    return 0;
}