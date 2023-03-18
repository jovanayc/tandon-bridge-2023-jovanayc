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

void resizeArray(int*& arr, int currentSize, int newSize);
void userInput(int*& arr, int i, int& max);

int main(){
    //user inputs
    int input;
    int currentSize = 4;
    int max = 10;

    //array initialization & varibales
    int* arr = new int[currentSize];

    //increasing array variables
    int newSize = currentSize * 2; //sets for first time, but needs to be reset for interator in for loop
    int oneMore = currentSize++; //sets for first time, but needs to be reset for interator in for loop

    cout << "Please enter a sequence of positive integers, each in a separate line." << endl;
    cout << "End your input by typing '-1': " << endl;

    for (int i = 0; i < currentSize; i++){

        userInput(arr, i, max);

        if (i == max-1){
            cout << "END -- at Max" << endl;
            break;        
        } else if (i == currentSize-1 && i != max){
            //increase array as normal
            arr[i] = i * 10;
            cout << "Value " << i << " = " << arr[i] << endl;
            //call resize Array to increase size of array when needed            
            cout << "RESIZE" << endl << "Current size = " << currentSize << endl;
            
            resizeArray(arr, currentSize, newSize); 

            //Update newSize based on Max data limits; add one more if max is in range, add double if max is not in range
            if (currentSize * 2 >= max){
                newSize = oneMore; // update the updated  current size to add 1 for situations when you only need 1 more index
                oneMore++; // Increase one more based for future needs
            } else if (currentSize * 2 < max){
                newSize = currentSize * 2;
            }

            //update currentSize based how large the increase should be
            currentSize = newSize; 

            cout << "Updated Current size = " << currentSize << endl;
        } else if (i < currentSize-1){
            arr[i] = i * 10;
            cout << "Value " << i << " = " << arr[i] << endl;
        }
       /*
        cin >> input; // takes in user inputs within the for loop

        // continue to take input until user types -1
        if (input != -1){ 
            // add each input into new index in the array
            arr[index] = input; 
            index++; // increase index number after each input so that no two inputs are in one index
            countInputs++; // count number of user inputs to get size of array
            cout << "index: " << i << " = " << arr[index] << endl;     
        //break from cin if current input is -1
        } else if (input == -1){
            break;
        }
        */
    }
}

void resizeArray(int*& arr, int currentSize, int newSize){
    // define temporary array to increase size
    int* holdingArr = new int[newSize];
    for (int i = 0; i < currentSize; i++){
        holdingArr[i] = arr[i];
    }
    delete [] arr;
    arr = holdingArr;
}

void userInput(int*& arr, int i, int& max){
    int input; // user variables
    int index = 0, countInputs = 0; //iterator varibales
    cin >> input; // takes in user inputs within the for loop

    // continue to take input until user types -1
    if (input != -1){ 
        // add each input into new index in the array
        arr[index] = input; 
        index++; // increase index number after each input so that no two inputs are in one index
        countInputs++; // count number of user inputs to get size of array
        cout << "index: " << i << " = " << arr[index] << endl;     
    //break from cin if current input is -1 by changing max to current input
     } else if (input == -1){
        max = arr[index];
        cout << "-1 input means break" << endl;
    }

    cout << endl << "number of inputs" << countInputs;

}