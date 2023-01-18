//Jovanay Carter, NetID N113169951, Bridge Winter 2023, 
//Homework 2, Question 2
#include <iostream>
using namespace std;

int main(){
    //sets variables
    int dollars, cents;
    int money, moneyleft, quarters, dimes, nickels, pennies;

    //get user inputs
    cout << "Please enter your amount in the format of dollars and cents separated by a space:" << endl;
    cin >> dollars >> cents;

    //calculate total money
    money = (dollars*100) + cents;

    //calculate quarters, dimes, nickels, and pennies
    quarters = money / 25;
    money %= 25;

    dimes = money / 10;
    money %= 10;

    nickels = money / 5;
    money %= 5;

    pennies = money;

    //print user money value in quarters, dimes, nickels, and pennies format
    cout << dollars << " dollars and " << cents << " cents are:" << endl;
    cout << quarters << " quarters, " << dimes << " dimes, " << nickels << " nickels and " << pennies << " pennies" << endl;
    return 0;
}