//Jovanay Carter, N11316951 HW8 Q1, Winter Extended Bridge
//[NOTSUBMITTED] done on March 8, 2023

/*Prompt: Write a program with an array that checks if a user input word is a palindrome or not (use boolean)
Announce to user if the word is a palindrome or not. */

#include <iostream>
#include <string>
using namespace std;

bool isPalindrome (string str);

int main (){
    string userInput;

    cout << "Please enter a word: ";
    cin >> userInput;

    isPalindrome(userInput);

    return 0;
}

bool isPalindrome (string str){
    int reverseString;
    int strLength = str.length();
    bool issue = false;

    //go through the string from front while comparing the back
    for (int i = 0; i < strLength; i++){
        //if the string current index and reverse index don't match, not a palindrome
        if (str[i] != str[strLength-i-1]){ 
            issue = true;
            cout << str << " is not a palindrome" << endl;
            break;
        } else if (i == strLength-1){
            cout << str << " is a palindrome" << endl;
        }
    }

    return issue;

}
