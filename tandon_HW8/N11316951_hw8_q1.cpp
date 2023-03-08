//Jovanay Carter, N11316951 HW8 Q1, Winter Extended Bridge
//[NOTSUBMITTED] done on March 8, 2023

/*Prompt: Write a program with an array that takes in user values
  and prints the minimum value in the array */

#include <iostream>
#include <string>
using namespace std;

int minInArray (int arr[], int arrrSize);

int main() {
    int arrSize = 20;
    int inputArr[arrSize];
    int ind, currentNum;

    cout << "Please enter values for your array: " << endl;
    
    //Add user values into array "arr"
    for (ind = 0; ind < arrSize; ind++){
        cin >> currentNum;
        inputArr[ind] = currentNum;
    }

    minInArray (inputArr, arrSize);

    return 0;
}

int minInArray (int arr[], int arrSize){
    int ind, min, currentNum;
    
    //define starting minumum with first index
    min = arr[0];
    
    //Look through array indecies for minimum values, starting an the 2nd element in array bc first element is initialized to min already
    for (ind = 1; ind < arrSize; ind++){
        if (arr[ind] < min) {
            min = arr[ind];
        }
    }

    //return final Minimum
    cout << "The mimum value is " << min << ", and it is located in the following indicies: ";

    //cout all indecies that contain the minimum value
    for (ind = 0; ind < arrSize; ind++){
        if (min == arr[ind])
            cout << ind << " ";
    }

    return min;
}