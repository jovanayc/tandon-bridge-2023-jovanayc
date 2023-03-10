// Jovanay Carter, NetID N113169951, Bridge Winter 2023,
// Homework 7, Question 1, Feb 19, 20233

/* "Write a program that reads from the user two positive integers n, k, (assuming >=k),
and prints the value of n choose k."
*/

//formula: n! / (n-k)!*(k)!

#include <iostream>
using namespace std;

//create nFactorial fucntion called nFact

int nFactorial(int &n){
    for (int i=1; i<=n; i++){
        n *= i;
    }
}

int kFactorial(int &k){
    for (int i=1; i<=k; i++){
        k *= i;
    }
}

int kCombination (int &n, int &k){
    nFactorial(n) / (nFactorial(n) - kFactorial(k)) * kFactorial(k);
}


int main () {
    int n, k, i;
    cout << "Please enter n and k (n>=k) : " <<endl;
    cin >> n >> k;

}


