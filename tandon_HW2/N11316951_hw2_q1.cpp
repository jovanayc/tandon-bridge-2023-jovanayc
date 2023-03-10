//Jovanay Carter, NetID N113169951, Bridge Winter 2023, 
//Homework 2, Question 1, January 20, 2023

/* Prompt: The program should take in four integers from the user, representing quarters, dimes, nickels,
and pennies, and the program should print the value of the user's money in terms of dollars and cents.
*/

#include <iostream>
using namespace std;

int main(){
    //set variables
    int quarters, dimes, nickels, pennies;
    int money, dollars, cents;

    //get inputs from user
    cout << "Please enter number of coins:" << endl;
    cout << "# of quarters: " << endl;
    cin >> quarters;

    cout << "# of dimes: " << endl;
    cin >> dimes;

    cout << "# of nickels: " << endl;
    cin >> nickels;

    cout << "# of pennies: " << endl;
    cin >> pennies;

    //calculate money and split into dollars and cents
    money = (quarters*25) + (dimes*10) + (nickels*5) + pennies;
    dollars = money / 100;
    cents = money % 100;
    
    //return output in dollars and cents
    cout << "The total is " << dollars << " dollars and " << cents << " cents" << endl;

    //end program
    return 0;
}