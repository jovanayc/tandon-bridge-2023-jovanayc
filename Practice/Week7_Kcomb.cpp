// Jovanay Carter, NetID N113169951, Bridge Winter 2023,
// Homework 7, K Combination Practice, March 7, 20233

/* "Write a program that reads from the user two positive integers n, k, (assuming >=k),
and prints the value of n choose k."
*/

//formula: n! / (n-k)!*(k)!

#include <iostream>
using namespace std;

//create nFactorial fucntion called nFact


int factorial (int num);

int main () {
    int n, k, kComb, nFact, kFact, n_kFact;
    cout << "Please enter n and k (n>=k) : " << endl;
    cin >> n >> k;

    //Calculate factorial using factorial function.

    nFact = factorial(n);
        cout << "nFact: " << nFact << endl;
    kFact = factorial(k);
        cout << "kFact :" << kFact << endl;
    n_kFact = factorial (n-k);
        cout << "n_kFact :" << n_kFact << endl;
    kComb = nFact / (n_kFact * kFact);

    cout << n << " choose " << k << " is: " << kComb << endl;

    return 0;
}

int factorial(int num){
    int result=1;
    for (int i=num; i>=1; i--){
        result *= i;
        cout << "result in fuc: " << result << endl;
    }
    
    return result;

}