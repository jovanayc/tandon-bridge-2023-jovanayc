//Jovanay Carter, N11316951, Winter Extended Bridge 2023
//Homework 9, Question 2, March 10, 2023

/* Prompt: Write a program that determines if two strings are anagrams, meaning letters are equivalend in both strings.
Note: Program should not be case sensitive
Note: Run time should be theta(n); break down your implementation to functions.
*/

#include <iostream>
#include <string>
using namespace std;

//Initialize functions
bool isAnagram(string string1, string string2);

//Main function
int main(){
    string string1, string2;
    cout << "Please enter your first string \n";
    getline (cin, string1);
    cout << "Please enter your second string \n";
    getline (cin, string2);

    isAnagram(string1, string2);

    return 0;
}

bool isAnagram(string string1, string string2){
    int countStr1 [26] = {0}, countStr2 [26] = {0};
    int str1ElementLocation = 0, str2ElementLocation = 0;
    bool equalLetters = false;

    cout << "String 1 " << string1 << endl;
    cout << "String 2 " << string2 << endl;


    //loop through both strings to count how many of each letter is present
    //string1 letter loop
    for (int i = 0; i < string1.length(); i++){

        /////*** STRING 1 LETTER FILTERS INTO countStr1 ARRAY ***/////
        //Keep track of letters used in text by ++ into the associated location in the array
        if (string1[i] >= 'a' && string1[i] <= 'z'){
            str1ElementLocation = string1[i] - 'a'; //find location by subtraction current letter ASCII from 'a' ASCII 
            countStr1[str1ElementLocation] ++; //add a value to the location for every time that letter comes up
            //cout << "string 1 @ i " << string1[i] << " \t Str1 Element location " << str1ElementLocation << "\t Count for str1: " << countStr1[str1ElementLocation] << endl;
        }

        //Repeat for Uppercase casinarios
        if (string1[i] >= 'A' && string1[i] <= 'Z'){
            str1ElementLocation = string1[i] - 'A';
            countStr1[str1ElementLocation] ++;
            //cout << "string 1 @ i " << string1[i] << " \t Str1 Element location " << str1ElementLocation << "\t Count for str1: " << countStr1[str1ElementLocation] << endl;
        }
    }

    for (int i = 0; i < string2.length(); i++){
        /////*** STRING 2 LETTER FILTERS INTO countStr2 ARRAY ***/////
        //Keep track of letters used in text by ++ into the associated location in the array
        if (string2[i] >= 'a' && string2[i] <= 'z'){
            str2ElementLocation = string2[i] - 'a'; 
            countStr2[str2ElementLocation] ++;
            //cout << "string 2 @ i " << string2[i] << " \t Str2 Element location " << str2ElementLocation << "\t Count for str2: " << countStr2[str2ElementLocation] << endl;
        }

        //Repeat for Uppercase casinarios
        if (string2[i] >= 'A' && string2[i] <= 'Z'){
            str2ElementLocation = string2[i] - 'A';
            countStr2[str2ElementLocation] ++;
            //cout << "string 2 @ i " << string2[i] << " \t Str2 Element location " << str2ElementLocation << "\t Count for str2: " << countStr2[str2ElementLocation] << endl;
        }
    }

    //Compare two strings, element by element, and adjust boolean according to if the number of occurances for each letter is a match or not
    for (int i = 0; i < 26; i++){
        if (countStr1[i] == countStr2[i]){
            equalLetters = true;
        } else  {
            equalLetters = false;
            break;
        }
    }

    //Print if letters are equal or not based on boolean result
    if (equalLetters == true){
        cout << "The two strings--" << string1 << "--and--" << string2 << "--ARE anagrams" << endl;
    } else { 
        cout << "The two strings--" << string1 << "--and--" << string2 << "--are NOT anagrams" << endl;
    }

    return equalLetters;   
}
 
