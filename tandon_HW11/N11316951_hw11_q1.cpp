//Jovanay Carter, N11316951, Winter Extended Bridge 2023
//Homework 11, Question 1, March 24, 2023

/* Prompt: Write three recursive programs
    1) Prints a right trangl
    2) Prints hourglass with right triangles only
    3) Prints ruler marks of 2^n - 1 marks
*/

#include <iostream>
using namespace std;

void triangle (int n){
    if (n==1){ // base case
        cout << '*';
    } else {
        triangle (n-1);
        for (int i = 0; i < n; i++){ // for recursive steps, print n number of stars
            cout <<"*";
        }
    }

    cout << endl; // go to next line at the end of each print
}

int main() {
    int n = 4;

    //Call triangle function
    triangle(n);
}