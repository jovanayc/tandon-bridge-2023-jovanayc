//Jovanay Carter, N11316951, Winter Extended Bridge 2023
//Homework 9, Question 3, March 10, 2023

/* Prompt: Write a program that gets an array of integers & its size; create a new array with positive numbers only.
Should contain 4 versions of the function.
Note: Mian program should test functions
*/

#include <iostream>
#include <vector>
using namespace std;

int* getPosNums1(int* arr, int arrSize, int& outPosArrSize);

int main(){
    int arrSize;
    int num;

    cout << "Please enter array size: ";
    cin >> arrSize;

    cout << "Please enter values for the array. Separate numbers with space." << endl;

    //loop to get user numbers and add them to an array
    int userNums [arrSize];
    for (int i = 0; i < arrSize; i++){
        cin >> num;
        userNums[i] = num;
        cout << userNums[i] << ' '; // print values
    }

    return 0;
}

int* getPosNums1(int* arr, int arrSize, int& outPosArrSize){

    
}
