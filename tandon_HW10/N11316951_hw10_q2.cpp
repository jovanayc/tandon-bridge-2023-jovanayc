//Jovanay Carter, N11316951, Winter Extended Bridge 2023
//Homework 10, Question 2, March 17, 2023

/* Prompt: Write a program that gets an array (range: {0, 1, 2 ... n}) and its logical size. When called it creates a new array
containing the numbers missing from the array that are in the logical range. Ex: arr has {3,1,3,0,6,4}; size is 6; missing nums arr: {2,5}
Note: Function should run in linear time theta (n);
Note: Main should test this function.
*/

#include <iostream>
using namespace std;

int* findMissing (int arr[], int n, int& resArrSize);

int main() {
    //test array input
    int arr [6] = {2, 2, 2, 2, 4, 6};
    int n = 6;
    int resArrSize = 0;
    findMissing (arr, n, resArrSize);
    return 0;
}

int* findMissing (int arr[], int n, int& resArrSize) {
    bool numIsPresent;
    resArrSize = n;
    int* comparisonArr = new int [resArrSize];
    int* missingNumsArr = new int [resArrSize];
    int missingNumIndex = 0;
    int comparisonArrIndex = 0;

    //puts n values in an array for comparison
    for (int i = 0; i <= n; i++){
        if (i != n){
            comparisonArr[comparisonArrIndex] = i;
            comparisonArrIndex++;
        } if (i == n){
            comparisonArr[comparisonArrIndex] = i;
        }
    }

    //print out original array
    cout << "Original array: ";
    for (int i = 0; i < n; i++){
        cout << arr[i] << ' ';
    }

    cout << "\nOriginal array nums size: " << comparisonArrIndex;

    cout << "\nFind missing values results " << endl;

    for (int i = 0; i <= n; i++){
        for (int j = 0; j < n; j++){
            
            if (comparisonArr[i] == arr[j]){
                numIsPresent = true;
                cout << comparisonArr[i] << " is TRUE at value " << arr[j] << endl;
                cout << "--" << endl;
                break;
            } else if (comparisonArr[i] != arr[j] && (j < n-1)){ // checks for missing values before the end of the possible options
                //adds missing values to the new array
                numIsPresent = false;
                cout << comparisonArr[i] << " is FALSE at value " << arr[j] << endl;
            } else if (missingNumsArr[i] != arr[j] && (j = n-1)){ // checks for missing values at the end of the possible options
                numIsPresent = false;
                cout << comparisonArr[i] << " is FALSE at value " << arr[j] << endl;
                missingNumsArr[missingNumIndex] = comparisonArr[i];
                cout << "Updated Missing Numbers Array at index " << missingNumIndex << " = " << missingNumsArr[missingNumIndex] << endl;
                missingNumIndex++;
                cout << "--" << endl;
            }
        }
    }

    cout << "Missing num array size: " << missingNumIndex; //prints amount of numbers in missing num array;

    cout << "\nMissing num array: ";
    //prints numbers in missing num array with brackets on each side of array
    for (int i = 0; i < missingNumIndex; i++){
      if (i == 0){
        cout << "[" << missingNumsArr[i] << ", ";
      } else if (i > 0 && i < missingNumIndex-1){
        cout << missingNumsArr[i] << ", ";
      } else if (i > 0 && i == missingNumIndex-1) {
        cout << missingNumsArr[i] << "]" << endl; // don't print comma on last array element
      }
    }

    return missingNumsArr;
    delete[] comparisonArr;
    delete[] missingNumsArr;
}