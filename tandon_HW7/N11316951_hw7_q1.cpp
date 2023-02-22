// Jovanay Carter, NetID N113169951, Bridge Winter 2023,
// Homework 7, Question 1, Feb 19, 20233

/* Prompt: Calendar month and year program that takes in user input */

#include <iostream>
using namespace std;

//functions
void printMonthCalendar (int numOfDays, int startingDay);
bool leapYear (int year);
void printYearCalendar (int year, int startingDay);

//Global scope variables
int numOfDays, startingDay, year, lastDay;

int main () { 
    //cout << "Enter number of days in the month: ";
    //cin >> numOfDays;

    cout << "Enter a number 1-7 for the starting day that month: ";
    cin >> startingDay;

    cout << "What year is it? ";
    cin >> year;

    //print year functions which includes month & leap year functions
    printYearCalendar (year, startingDay);

    return 0;
}

void printMonthCalendar (int numOfDays, int startingDay){
    int row,  weekDay, daysInWeek = 7, daysNotInMonth=0, date;

    //make sure number of days is a pre-set value of 28, 30, or 31.
    if (numOfDays == 28 || numOfDays == 30 || numOfDays == 31 || (numOfDays == 29 && leapYear(year) == true)){
        //HEADER -- Print days of the week "Mon - Fri" before for loop of calendar numbers starts
        cout << "Mon \tTues \tWed \tThr \tFri \tSat \tSun \t" << endl; // in first row, print calendar days

        //CALENDAR DAYS -- print rows with continuing numbers based on user input values of numOfDays and startingDay
        for (row = 1; row <= 6 ; row++){
            for (weekDay = 1; weekDay <= daysInWeek; weekDay++){
                //Print tabs in row 1 for un-used days of the first week
                if (row == 1 && weekDay < startingDay){
                    cout << "\t";
                    daysNotInMonth++;

                //Print dates from starting number onward in row 1, stop at the 7th column.
                } else if (row == 1 && weekDay == startingDay){
                    for (date = 1; date <= daysInWeek-daysNotInMonth; date++)
                        cout << date << "\t";

                //Print dates for rest of the month cutting off each week after 7 days
                } else if (row > 1 && row < 6 && weekDay <= daysInWeek && date <= numOfDays){
                    //when its the last day of the month, print date and save last day value
                    if (date == numOfDays) {
                        //print date and tab
                        cout << date << "\t";

                        //update last Day to # representation of day of the week
                            lastDay = weekDay;
                            date ++;

                    //if not last day, then print date value and do not update lastDay
                    } else {
                        cout << date << "\t";
                        date ++;
                    }
                //If days extend to row 6, print the days and add a break line
                } else if (row == 6 && weekDay <= daysInWeek && date <= numOfDays){
                    //when its the last day of the month, print date and save last day value
                    if (date == numOfDays) {
                        //print last date and line break if in row 6
                        cout << date << "\t" << endl;

                        //update last Day to # representation of day of the week
                            lastDay = weekDay;
                            date ++;

                    //if not last day, then print date value and do not update lastDay
                    } else {
                        cout << date << "\t" << endl;
                        date ++;

                    }
                }
            }
            // break line at end of every 7 day row
            cout << endl;
        } 
    } else 
        cout << "Please enter valid month parameters." << endl;
}   

bool leapYear (int year){
    if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)){
        return true;
    } else {
        return false;
    }
}

void printYearCalendar (int year, int startingDay){
    int monthNum, monthTitle, febLeapYearOrNot;

    if (startingDay >= 1 && startingDay <= 7){
        for (monthNum = 1; monthNum <= 12; monthNum++){
            switch(monthNum) {
                case 1:
                    cout << "January " << year << endl;
                    printMonthCalendar(31, startingDay);
                    break;
                case 2:
                    //check if leap year is value
                    if (leapYear(year) == true){
                        febLeapYearOrNot = 29;
                    } else {
                        febLeapYearOrNot = 28;
                    }
                    //input parameters 
                    cout << "February " << year << endl;
                    printMonthCalendar(febLeapYearOrNot, lastDay+1);
                    break;
                case 3:
                    cout << "March " << year << endl;
                    printMonthCalendar(31, lastDay+1);
                    break;
                case 4:
                    cout << "April " << year << endl;
                    printMonthCalendar(30, lastDay+1);
                    break;
                case 5:
                    cout << "May " << year << endl;
                    printMonthCalendar(31, lastDay+1);
                    break;
                case 6:
                    cout << "June " << year << endl;
                    printMonthCalendar(30, lastDay+1);
                    break;
                case 7:
                    cout << "July " << year << endl;
                    printMonthCalendar(31, lastDay+1);
                    break;
                case 8:
                    cout << "August " << year << endl;
                    printMonthCalendar(31, lastDay+1);
                    break;
                case 9:
                    cout << "September " << year << endl;
                    printMonthCalendar(30, lastDay+1);
                    break;
                case 10:
                    cout << "October " << year << endl;
                    printMonthCalendar(31, lastDay+1);
                    break;
                case 11:
                    cout << "November " << year << endl;
                    printMonthCalendar(30, lastDay+1);
                    break;
                case 12:
                    cout << "December " << year << endl;
                    printMonthCalendar(31, lastDay+1);
                    break;
                default:
                    cout << "Please enter valid month between 1 - 12." << endl;
            }
        }

    } else {
        cout << "Please enter valid starting day." << endl;
    }
} 
