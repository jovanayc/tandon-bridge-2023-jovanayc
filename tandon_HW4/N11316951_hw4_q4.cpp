// Jovanay Carter, NetID N113169951, Bridge Winter 2023,
// Homework 4, Question 4, February 2, 2023

/* PROMPT: Write two versions of a program that eads a sequence of positive integers from the user,
    calculates their geometric mean (volume), and prints the geometric mean.
    Notes:
    a) Mean is {a1,a2,a3...} continaing positive numbers, is given by 
    b) In order to calculate the n-th root of a number, call the "pow" function, using the cmath library

    Read the integer sequence in two ways
    1) Read the length of the sequence
    2) Read the numbers until -1 is entered.
*/

#include <iostream>
#include <cmath>
using namespace std;

int main(){
    //Set variables
    int count;
    double power, product=1, input, geoMean;

    //User inputs
    cout<<"VERSION 1: "<<endl;
    cout<<"Please enter the length of the sequence: ";
    cin>>power;
    
    cout<<"Please enter your sequence: "<<endl;
    //take in several cin items
    for (count=1; count <= power; count++){
        cin>>input;
        product *= input;
    }
    
    //Calculate nth root using user inputs
    geoMean = pow(product, double (1/power));//Power is the second number
    cout<<"The geometric mean is: "<<geoMean<<endl;    


    //** VERSION 2: Reading numbers until -1 is entered **//
    //Set variables
    double inputTwo, productTwo=1, nthRoot=0, geoMeanTwo;
    bool inputEnd=false;
    
    cout<<"VERSION 2: "<<endl; 
    cout<<"Please enter a non-enpty sequence of positive integers, each one in a separte line. End your sequence by typing -1: "<<endl;

    //get input until -1 is typed
    while (inputEnd == false) {
        cin>>inputTwo;
        if (inputTwo == -1){
            inputEnd = true;
        } else {
            productTwo *= inputTwo; //multiply all user inputs together
            nthRoot++; //sum each to get the nth root
        }
    }

    //calculate geometric mean
    geoMeanTwo = pow(productTwo, (1/nthRoot));
    cout<<"The geometric mean is: "<<geoMeanTwo<<endl;
    return 0;
}