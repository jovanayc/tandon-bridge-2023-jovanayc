// Jovanay Carter, NetID N113169951, Bridge Winter 2023,
// Homework 6, Question 4, Feb 16, 20233

/* Prompt: Write a program prints the user's integers divisors 
    in an ascending order. Keep run time down to Osqrt(num).
*/

#include <iostream>
using namespace std;

void printDivisors(int &num);

int main(){
    int n, solution;

    cout << "Please enter a positive integer: " << endl;
    cin >> n;

    cout << "Part A" << endl << "Divisor Values: ";
    printDivisors(n);
    cout << endl;

    cout << "Part B" << endl;
    if (n >= 2){
        cout << "Divisor Values: ";
        printDivisors(n);
        cout << " ";
    } else {
        cout << "Number entered is less than 2. Try again." << endl;
    }

    return 0;

}

void printDivisors(int &num){
    int divisor;

    //loop through numbers in descending order starting at input
    for (int i=num; i>=1; i--){
        if (num % i == 0){ //check if number has a remainder or not
            divisor = num / i; //divide the input by the index to get the ascending order values
            cout << divisor << ' ';
        }
    }
}
