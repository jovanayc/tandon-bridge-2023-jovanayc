// Jovanay Carter, NetID N113169951, Bridge Winter 2023,
// Homework 4, Question 1, January 31, 2023

/* Prompt: Write two versions of a program that reads a positive integer n,
 and prints the first n even numbers.
    a) In the first, use a while loop
    b) In the second, use a for loop
 */

#include <iostream>
#include <string>
using namespace std;

int main(){
    //** While Loop **//
    cout<< "SECTION A: While Loop" << endl;
    //Set variables
    int whileNum;
    int whileCounter = 1; //starting occunter with 1

    //user inputs
    cout<<"Please enter a positive integer"<< endl;
    cin>>whileNum;
    
    while (whileCounter <= (whileNum*2)){ //stop should be when the user input is multiplied by 2
        if (whileCounter % 2 == 0) //checks if the counter number is even with mod
            cout << whileCounter << endl; // if even, print the number
        whileCounter++; // always increase counter, whether even or not.
    }


    //** DIVIDER FOR SECTIONS **//
    cout<< "----DIVIDER----"<<endl;


    //** FOR LOOPS ** // 
    cout<< "SECTION B: For Loop" << endl;
    //set variables
    int forLoopN;
    int forLoopCounter = 1;

    //user input
    cout<<"[For Loop] Please enter a positive integer"<< endl;
    cin>>forLoopN;

    //calculation
    for (forLoopCounter = 1; forLoopCounter <= (forLoopN*2); forLoopCounter++){
        if (forLoopCounter % 2 == 0) // assess if number is even
            cout<< forLoopCounter << endl;
    }

    return 0; // end program
}
