// Jovanay Carter, NetID N113169951, Bridge Winter 2023,
// Homework 4, Question 5, [NOT SUBMITTED] February 8, 2023

/* PROMPT: Write a program that asks the user to input a positive integer n, and prints a textual image of an
    hourglass made of 2n lines with asterisks. For example if n=4, the program should print:
*/

#include <iostream>
using namespace std;
#include <string>

int main (){
    //set variables
    int input, lines, total;
    string output;

    //take user input
    cout<<"Please input a number: "<<endl;

    //for loop for input
    cin>>input;
    total = 2*input;


    //loop for shape
    for (int row=0; row < input; row++){
        //add a space to space the stars
        for (int space=0; space < input-row; space++){
            output += " ";
            //cout<<output<<endl;
        }
        //add stars for loop
        for (int star=0; star <= row; star++){
            output += "*";
            //cout<<output<<endl;
        }
    
        output += '\n';

    }
    
    cout << output << endl;
    return 0;
}