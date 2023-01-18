//Jovanay Carter, NetID N113169951, Bridge Winter 2023, 
//Homework 2, Question 3, January 20, 2023
#include <iostream>
using namespace std;

int main(){
    //set variables
    int johnDays, johnHours, johnMinutes, billDays, billHours, billMinutes;
    int totalDays, totalHours, totalMinutes;
    
    //get user inputs for John
    cout << "Please enter the number of days John has worked: ";
    cin >> johnDays;
    cout << "Please enter the number of hours John has worked: ";
    cin >> johnHours;
    cout << "Please enter the number of minutes John has worked: ";
    cin >> johnMinutes;

    //get user inputs for Bill
    cout << endl << "Please enter the number of days Bill has worked: ";
    cin >> billDays;
    cout << "Please enter the number of hours Bill has worked: ";
    cin >> billHours;
    cout << "Please enter the number of minutes Bill has worked: ";
    cin >> billMinutes;

    //calculate total time worked
    totalDays = johnDays + billDays + ((johnHours + billHours) / 24) + ((johnMinutes + billMinutes) / 60);
    totalHours = ((johnHours + billHours) % 24) + ((johnMinutes + billMinutes) / 60);
    totalMinutes = (johnMinutes + billMinutes) % 60;

    cout << "The total time both of them worked together is: " << totalDays << " days, " << totalHours << " hours, and " << totalMinutes << " minutes." << endl;
    return 0;
}