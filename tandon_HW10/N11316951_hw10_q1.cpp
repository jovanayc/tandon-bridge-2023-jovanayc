//Jovanay Carter, N11316951, Winter Extended Bridge 2023
//Homework 10, Question 1, March 17, 2023

/* Prompt: Write a program that gets an string sentence and creates an array with the words in that sentence.
Note: Function should run in linear time (theta(n)).
Write a test in main. */

#include <iostream>
#include <string>
#include <vector>
using namespace std;

string* createWordsArray(string sentence, int& outWordsArrSize);

int main(){  
  string sentence;
  int outWordsArrSize = 0;

  cout << "Please enter your sentence:" << endl;
  getline (cin, sentence);
  
  createWordsArray (sentence, outWordsArrSize);
  
  return 0;
}


string* createWordsArray(string sentence, int& outWordsArrSize){
    int delimiterIndex = 0;
    int previousDelimiterIndex = 0;
    string newElementWord;

    string* createWordsArray;
    createWordsArray = new string [outWordsArrSize];
    int wordsArrIndex = 0;
      
    //find space delimiter
    for (int i = 0; i < sentence.length()-1; i++){
      
      //find instances of delimiters (space, commas, or periods)
      if (((sentence[i] >= 'a' && sentence[i] <= 'z') || (sentence[i] >= 'A' && sentence[i] <= 'Z'))
        && (sentence[i+1] == ' ' || sentence[i+1] == ',' || sentence[i+1] == '.')){
       
        //set index of delimiter, resetting from 0 at the last delimiter each time by subtracting
        delimiterIndex = (i+1) - previousDelimiterIndex;
          //cout << delimiterIndex << endl; // developer check

        //once you find delimiter, updated the substr with index by starting at the last delimiter +1 and ending at the new delimiter.
        newElementWord = sentence.substr(previousDelimiterIndex, delimiterIndex);
          //cout << newElementWord << endl; // developer check

        //add new substr into array of text
        createWordsArray[wordsArrIndex] = newElementWord; //updated words array with current word
        
        //Update values for next iteration
        wordsArrIndex ++; // increase index for words arr
        outWordsArrSize ++;// increase size count of words arr
        previousDelimiterIndex += delimiterIndex + 1; //reset previous delimiter          
      }
    }

    //print out array in individual elements
    for (int i = 0; i < outWordsArrSize; i++){

      if (i != outWordsArrSize){
        cout << "\"" << createWordsArray[i] << "\" , ";
      } else if (i == outWordsArrSize) {
        cout << " last \"" << createWordsArray[i] << "\"" << endl; // don't print comma on last array element
      }
    }
  
    cout << "\n Number of words in sentence / size of words in the new words array: " << outWordsArrSize << endl;

    return createWordsArray;

    //delete[] outWordsArrSize;
}