// Jovanay Carter, NetID N113169951, Bridge Winter 2023,
// Homework 4, Question 3, February 2, 2023

/* Prompt: Write a program that reads from the user a positive integer (decimal), and prints it's binary (base 2)
 representation.
 Requirements:
    a) Implement an algorithm that converts decimal to base 2
    b) Do not use a string or special cout functionality to make the conversaion
    b) Do not use an array
 */

#include <iostream>
using namespace std;

int main(){
   //set variables
   int input, workingNum;
   int binary=0, valueIncrement=1;

   //Get user Input
   cout<<"Enter decimal number: "<<endl;
   cin>>input;

   //Algorithm
   for (workingNum=input; workingNum>0; workingNum/=2){ //as long as working number is great thatn 0, repeat and iterate by dividing the current working number by 2
      binary += (workingNum % 2)*valueIncrement;
      //increase 10s exponentially during each loop {10,100,1000,10000,etc.}
      valueIncrement *= 10;      
   }

   //Output final statement
   cout<<"The binary representation of "<<input<<" is "<<binary;
}
