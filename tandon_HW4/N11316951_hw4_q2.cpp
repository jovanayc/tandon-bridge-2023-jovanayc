// Jovanay Carter, NetID N113169951, Bridge Winter 2023,
// Homework 4, Question 2, February 2, 2023

/* Prompt: Write a program that reads from the user a (decimal) number, and prints it's representation
    in the simplified Roman numerals system.
    a) Digits must be a monotonically non-increasing sequence. That is, the value of each digit is less
        than or equal to the value of the digit that came before it.
    b) There is no limit on the number of times that 'M' can appear in the number. But the digits
        'D', 'L', 'V' can appear at most one time. Digits 'C', 'X', and 'I' can appear at most fours times.
 */

#include <iostream>
#include <string>
using namespace std;

int main(){
    //set variables
    int userNum;
    string romanNum;
    int I = 1, V = 5, X = 10, L = 50, C = 100, D = 500, M =1000; // roman numeral variables

    //user input
    cout << "Enter decimal number:" << endl;
    cin >> userNum;

    //while loop should loop through each increment of values, starting from 1000s+ and going to 1s values
    int j=userNum; //start j as userNum, but it will change along the way so they should be separate values
    while (j>0){ //keeps going until value being looped is 0
        if (j > M){ //check if userNum > 1000
            int valueM = j / M; // divid j by 1000 to get how many times the inner loop should run
            for (int i=valueM; i>0; i--){ 
                romanNum += 'M'; //add an M to final value for every 1000 value.
            }
            j %= M; //iterate the j number based on the M values that we've already used.

        } else if (j > D){
            romanNum += 'D'; //add a D to the roman number if the j is greater than 500; we don't give the chance for multiple Ds to run because it should only be 1
            j %= D; //iterate the j number based on the D values that we've already used.

        } else if (j > C){
            int valueC = j / C; //should divid the j value by 100s
            for (int k=valueC; k>0; k--){ 
                romanNum += 'C'; //add an C to final value for every 100 value.
            }
            j %= C; //iterate to get remainder after 1000s, 500s, and 100s are used

        } else if (j > L){
            romanNum += 'L'; //repeat process for 50s
            j %= L; // iterate based on 50s values used, should not be more than one 50 value.

        } else if (j > X){
            int valueX = j / X; //repeat process for 10s
            for (int g=valueX; g>0; g--){
                romanNum += 'X';
            }
            j %= X; //iterate based on 10s values used

        } else if (j > V){ 
            romanNum += 'V'; ///repeat process for 5s values, should not be more than one 5 value.
            j %= V; //iterate based on 5s values used

        } else if (j >= I){
            int valueI = j / I; //repeat process for 1s
            for (int f=valueI; f>0; f--){
                romanNum += 'I';
            }
            j %= I;//iterate based on 1s values used

        //cout<<"What is j at the end: "<<j<<endl; // should be 0;
        }
    }

    //print final number
    cout<< userNum << " is "<< romanNum <<endl; 

}