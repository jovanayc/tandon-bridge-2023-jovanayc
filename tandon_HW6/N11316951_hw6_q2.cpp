// Jovanay Carter, NetID N113169951, Bridge Winter 2023,
// Homework 6, Question 2, Feb 15, 20233

/* Prompt: Create a function using fibonacci sequence */

#include <iostream>
using namespace std;

void printShiftedTriangle(int &n, int &m, char &symbol);
void printPineTree(int &n, char &symbol);

int main(){
  int input, space;
  char symbol;
    
  //take user input
  cout<<"Input: ";
  cin>>input>>symbol;
  space = input+1;

  //run functions
  cout<<"Function A "<<endl;
  printShiftedTriangle (input, space, symbol);
  
  cout<<"Function B"<<endl;
  printPineTree(input, symbol);
  
  //end main function
  return 0;
}

//** Function A Algorithm **//
void printShiftedTriangle (int &n, int &m, char &symbol){
  //cout<<space<<endl;
  int row, margin, space, triangle;
  //rows for function
  for (row=0; row<n; row++){
    //margin with user input
    for (margin=0; margin<m; margin++){
      cout<<"_";
    }
    //spacing for triangle
    for (space=1; space<n-row; space++){
      cout<<"0";
    }
    //triangle with user symbols
    for (triangle=0; triangle<2*row+1; triangle++){
      cout<<symbol;
    }
    //break line
    cout<<endl;
  }
  //return;
}

//** Function B Algorithm **//
void printPineTree(int &n, char &symbol){
  int tri, triGroup, spaces;
  
  // loop through triangle groups, calling shifted triangle function each time
  if (n>=2){
    tri = 2; //starts with smallest trangle size
    spaces = n-1; // one less space in triangle
    for (triGroup=0; triGroup<n; triGroup++, tri++, spaces--) { 
      printShiftedTriangle(tri, spaces, symbol);
      }
  } else {
    tri = 1; //starts with smallest trangle size
    spaces = n-1; // one less space in triangle
    for (triGroup=0; triGroup<n; triGroup++, tri++, spaces--) { 
      printShiftedTriangle(tri, spaces, symbol);
      }
  }
}