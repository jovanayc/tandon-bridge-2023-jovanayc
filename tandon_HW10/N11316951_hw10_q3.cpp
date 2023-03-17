//Jovanay Carter, N11316951, Winter Extended Bridge 2023
//Homework 10, Question 3, March 17, 2023

/* Prompt: Write two versions of a program that reads a sequence of positive numbers. Then prints
all line numbers in sequence entered by the user that contain num or say num does not show in sequence.
    Version 1) no vector
    Version 2) should use vector
Note: Linear time, meaning theta(n)
Note: Write two functions main1() and main2() and test these in main()
*/

#include <iostream>
#include <vector>
using namespace std;

int main(){
    int input;
    int num;
    int size;
    int* arr = new int[size];
    int index = 0;
    int countInputs;

    cout << "Please enter a sequence of positive integers, each in a separate line." << endl;
    cout << "End your input by typing '-1': " << endl;

    for (int i = 0; i < size; i++){
        cin >> input;
        if (input != -1){
            arr[index] = input;
            index++;
            countInputs++;
            cout << "index: " << i << " = " << arr[index] << endl;
        } else if (input == -1){
            size = countInputs;
            break;
        }
    }

    cout << endl << "number of inputs" << countInputs;
}