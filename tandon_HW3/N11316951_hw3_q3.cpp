// Jovanay Carter, NetID N113169951, Bridge Winter 2023,
// Homework 3, Question 3, [NOT SUBMITTED] Feb 11, 20233

/* Prompt: Write a program that asks user to input three Real numbers a, b, and c, representing parameters of a quadratic equation:
    ax^2+bx+x=0.
    >Classify to one of the following: 
        - Infinite number of solutions: (all 0s)
        - No solution: (0s with xs)
        - No real solution: (x^2 (no middle x) and a 4)
        - One real solution
        - Two real solutions
    >In case there are 1 or 2 reals solutions, also print the solutions.

 */

 #include <iostream>
 //#include <cmath>
 using namespace std;

int main(){
    
    double a, b, c, solution;

    cout<<"Please enter value of a: "<<endl;
    cin>>a;
    cout<<"Please enter value of b: "<<endl;
    cin>>b;
    cout<<"Please enter value of c: "<<endl;
    cin>>c;

    //calculate quadratic equation
    if (a!=0 && b!=0 && c!=0){
        //all solutions besides infinate
        cout<<"This equation has a real solutions";



    } else {
        cout<<"This equation has infinite number of solutions";
    }


    return 0;
}