//Jovanay Carter, N11316951, Winter Extended Bridge 2023
//Homework 10, Question 1, March 17, 2023

/* Prompt: Write a program that gets an string sentence and creates an array with the words in that sentence.
Note: Function should run in linear time (theta(n)).
Write a test in main. */

#include <iostream>
#include <string>
using namespace std;

string* createWordsArray(string sentence, int& outWordsArrSize);

int main(){  
  string sentence = "You can do it.";
  int outWordsArrSize = 0;

  //For user input instead of static input choice
    //cout << "Please enter your sentence:" << endl;
    //getline (cin, sentence);
  
  createWordsArray (sentence, outWordsArrSize);
   
  return 0;
}


string* createWordsArray(string sentence, int& outWordsArrSize){
    int delimiterIndex = 0;
    int previousDelimiterIndex = 0;
    string newElementWord;

    string* wordsArray = new string [outWordsArrSize]; //initializing ptr to array of strings
    int wordsArrIndex = 0;
      
    //find space delimiter
    for (int i = 0; i < sentence.length(); i++){
      
      //If statement find instances of delimiters (space, commas, or periods)
      if (((sentence[i] >= 'a' && sentence[i] <= 'z') || (sentence[i] >= 'A' && sentence[i] <= 'Z'))
        && (sentence[i+1] == ' ' || sentence[i+1] == ',' || sentence[i+1] == '.' || sentence[i] == sentence.at(sentence.length()-1))){ // checks if curr i is a letter and next i is a delimiter or last char in the sentence
       
        //set index of delimiter, resetting from 0 at the last delimiter each time by subtracting
        delimiterIndex = (i+1) - previousDelimiterIndex;
          //cout << delimiterIndex << endl; // developer check

        //once you find delimiter, updated the substr with index by starting at the last delimiter +1 and ending at the new delimiter.
        newElementWord = sentence.substr(previousDelimiterIndex, delimiterIndex);
          //cout << newElementWord << endl; // developer check

        //add new substr into array of text
        wordsArray[wordsArrIndex] = newElementWord; //updated words array with current word
        
        //Update values for next iteration
        wordsArrIndex ++; // increase index for words arr
        outWordsArrSize ++;// increase size count of words arr
        previousDelimiterIndex += delimiterIndex + 1; //reset previous delimiter          
      }
    }

    //print out array in individual elements
    for (int i = 0; i < outWordsArrSize; i++){

      if (i < 1){
        cout << "[\"" << wordsArray[i] << "\", ";
      } else if (i > 0 && i < outWordsArrSize-1){
        cout << "\"" << wordsArray[i] << "\", ";
      } else if (i == outWordsArrSize-1) {
        cout << "\"" << wordsArray[i] << "\"]" << endl; // don't print comma on last array element
      }
    }
  
    cout << "Size of words in the new words array: " << outWordsArrSize << endl;

    return wordsArray;

    delete[] wordsArray;
}