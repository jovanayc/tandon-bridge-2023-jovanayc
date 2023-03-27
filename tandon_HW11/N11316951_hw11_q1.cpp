//Jovanay Carter, N11316951, Winter Extended Bridge 2023
//Homework 11, Question 1, March 24, 2023

/* Prompt: Write three recursive programs
1) Prints a right trangl
2) Prints hourglass with right triangles only
3) Prints ruler marks of 2^n - 1 marks
*/

#include <iostream>
#include <cmath>
using namespace std;

void triangle (int n);
void printOppositeTriangles(int n);
void printRuler (int n);

int main() {
    int n = 4; // hard code 4 for example

    cout << "a) Triangle" << endl;
    triangle(n);

    cout << "\n// BREAK //\n" << endl;

    cout << "b) Opposite Triangle" << endl;
    printOppositeTriangles(n);

    cout << "\n// BREAK //\n" << endl;

    cout << "c) Print Ruler" << endl;

    printRuler(n);

    return 0;
}

void triangle (int n){
    if (n==0){
    return;
    } else {
        triangle (n-1);
        for (int i = 0; i < n; i++){ // for recursive steps, print n number of stars
            cout << '*';
        }
    }
    cout << endl; // go to next line at the end of each print
}

void printOppositeTriangles(int n){
    int max = n;

    //base case for top & bottom
    if (n==0){
        return;

    } else {
        //Top half
        for (int j = n; j > 0; j--){ // using max value so it does not affect recursion of n
            cout << '*';
        } 
        cout << endl; // go to next line at the end of each print

        //Bottom half
        printOppositeTriangles (n-1);
        for (int i = 0; i < n; i++){
            cout << '*';
        }
    }

    cout << endl; // changing lines at the end of every recursive line
} 

void printRuler (int n){
    //base case for top & bottom
    if (n==0){
        return;

    } else {
        //Top half
        printRuler (n-1);

        for (int i = 0; i < n; i++){
            cout << '-';
        }

        cout << endl; // changing lines at the end of every recursive line

        printRuler (n-1);
    
    }
}