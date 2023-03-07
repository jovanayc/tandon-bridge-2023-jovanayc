//Jovanay Carter, Week 7, Feb 16, 2023
//Class 

#include <iostream>
using namespace std;

int checkPalindrome(int n);

int main() {

  // set variables
  int number;

  // user input
  cout << "Please enter a positive integer" << endl;
  cin >> number;

  int result = checkPalindrome(number);
  // calculation
  if (result == 1)
    cout << number << " is a palindrome." << endl;
  else
    cout << number << " is not a palindrome." << endl;
}

int checkPalindrome(int n) {
  int readFromRight, result;

  while (n > 0) {
    cout << "n" << n;
    readFromRight = n % 10;
    n /= 10;
  }

  if (readFromRight == n)
    result = 1;
  else
    result = 0;
}