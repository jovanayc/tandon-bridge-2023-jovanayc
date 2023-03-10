//Jovanay Carter, N11316951, Winter Extended Bridge 2023
//Homework 9, Question 4, March 10, 2023

/* Prompt: Write a program that will read a line of text, and
    1) outputs number of words in the line
    2) outputs the number of occurences of each letter.
    3) output letters in alpha order and list only those letters that occur in the input line.
Note: Count upper and lower case as the same letter
Note: Run time should be theta(n); break down your implementation to functions.
*/

#include <iostream>
#include <string>
using namespace std;

//Initialize functions
int countWords(string text);

//Main function
int main(){
    string text;

    //Get user text
    cout << "Please enter a line of text:" << endl;
    getline(cin, text);

    //call countWords function with userinput
    countWords(text);

    return 0;
}

//Define functions
int countWords(string text){
    int totalWords = 0; //starting count for totalWords
    int letterCount[26] = {0}; //array for storing values at each alpha
    int elementLocation;

    for (int i = 0; i < text.length(); i++){ // loops through to count words
        //count total words
        if ((text[i+1] == ' ' || text[i+1] == ',' || text[i+1] == '.') && (text[i] >= 'A' && text[i] <= 'Z' || text[i] >= 'a' && text[i] <= 'z')){ //count letters only when the next i value is a space, comma, or period
            totalWords++;
        }

        //Keep track of letters used in text by ++ into the associated location in the array
        if (text[i] >= 'a' && text[i] <= 'z'){
            elementLocation = text[i] - 'a'; //find location by subtraction current letter ASCII from 'a' ASCII 
            letterCount[elementLocation] ++; //add a value to the location for every time that letter comes up
            //cout << " \t Element location " << elementLocation << "\t letterCount: " << letterCount[elementLocation] << endl;
        }

        //Repeat for Uppercase casinarios
        if (text[i] >= 'A' && text[i] <= 'Z'){
            elementLocation = text[i] - 'A';
            letterCount[elementLocation] ++;
            //cout << " \t Element location " << elementLocation << "\t letterCount: " << letterCount[elementLocation] << endl;
        }
    }

    //Print total word count
    cout << totalWords << "\t words" << endl;
    
    //Print character and number associated with each array index if and only if the letter is used at least 1 time
    for (int j = 0; j < 26; j++){
        if (letterCount[j] > 0)
            cout << letterCount[j] << "\t" << (char)('a'+ j) << endl;
    }

    return totalWords;
}