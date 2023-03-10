// Jovanay Carter, NetID N113169951, Bridge Winter 2023,
// Homework 4, Question 6, [NOT SUBMITTED] February 3, 2023

/* PROMPT: Write a program that asks the user to pinput a positive integer n, and print all of the numbers
    from 1 to n that have more even digits than odd digits.
*/

#include <iostream>
using namespace std;

int main(){

    //set variables
    int num, even;
    int counter = 1, digitTwo;

    //user input
    cout<<"Please enter a positive integer"<< endl;
    cin>>num;

    //calculation
    for (counter = 1; counter <= num; counter++){
        if (counter % 2 == 0) // assess if number is even
            even = counter;
            cout<< "Even digits: "<< counter << endl;
    }
}