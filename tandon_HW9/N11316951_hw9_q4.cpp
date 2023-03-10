//Jovanay Carter, N11316951, Winter Extended Bridge 2023
//Homework 9, Question 4, March 10, 2023

/* Prompt: Write a program that takes in an array of numbers and its size and reorders them 
    1) All odd numbers come before even numbers
    2) Odd numbers will keep their original relative order
    3) Even numbers will be places in a reverse order
Note: Run time should be linear -- theta(n).
Note: Make your main() program test the function.
*/

#include <iostream>
#include <vector>
using namespace std;

void oddsKeepEvensFlip(int arr[], int arrSize);

int main() {
    //vector <int> numsVec;
    int nums;
    int arrSize;

    //get array size from user
    cout << "Please enter the length of your sequence: " << endl;
    cin >> arrSize;
    
    int numsArr [arrSize];

    //get user input for array
    cout << "Please insert numbers for array of " << arrSize << " length. Separate numbers with 'enter'/'return'." << endl;
    for (int i = 0; i < arrSize; i++){
        cin >> nums;
        numsArr[i] = nums;
    }

    oddsKeepEvensFlip(numsArr, arrSize);

/*
    //for expand vector size based on need
    for (int i = 0; i < 100; i++)
        v.push_back (i * 100);
    
    //ranged for loop
    for (int i : v)
        cout << i << endl;
*/
    return 0;
}

void oddsKeepEvensFlip(int arr[], int arrSize){
    vector <int> rearranged, evens;
    
    for (int i = 0; i < arrSize; i++){

        //check if value is even at each index, put in evens vector if so
        if ((arr[i] % 2) == 0) {
            evens.push_back(arr[i]);
        } else {
            //check if value is odd at each index, put in rearranged vector if so
            rearranged.push_back(arr[i]);
        }
    }

    //add evens values into larger rearrange function
    for (int i = evens.size()-1; i >= 0; i--){
        rearranged.push_back(evens[i]);
    }

    cout << "Rearranged array with odds first and evens in reverse order" << endl;
    for (int i = 0; i < rearranged.size(); i++){
        cout << rearranged[i] << ' ';
    }
}