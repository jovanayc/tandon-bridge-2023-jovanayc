// Jovanay Carter, NetID N113169951, Bridge Winter 2023,

/*PROMPT:
    Write a program that: 
        1) asks the user for their name, 
        2) asks the user to input their graduation year,
        3) asks the user to input the current year.
    Assume the student is in a four-year undergraduate program. Display the current status the student is in.
    Possible status include: not in college yet, freshman, sophomore, junior, senior, graduated.

    Note: If graduation year equals to current year, status is 'Graduated'; 
    If gradudation year is four years after current year, status is 'Freshman', etc.
*/

#include <string>
#include <iostream>
using namespace std;

int main() { 
    //set variables
    string name;
    int graduationYear;
    int currentYear = 2023;


    //user inputs
    cout<< "Please enter your name: " << endl;
    cin>> name;

    cout<<"Please enter your graduation year: " << endl;
    cin>> graduationYear;

    cout<<"Please enter current year: "<<endl;
    cin>> currentYear;

    //Determine student status using if statements
    if (graduationYear >= currentYear+5)
        cout<< name << ", you are not in college yet" <<endl;
    else if (graduationYear == currentYear+4)
        cout<< name << ", you are a Freshman" <<endl;
    else if(graduationYear == currentYear+3)
        cout<< name << ", you are a Sophomore" <<endl;
    else if (graduationYear == currentYear+2)
        cout<< name << ", you are a junior." <<endl;
    else if (graduationYear == currentYear+1)
        cout<< name << ", you are a senior" <<endl;
    else if (graduationYear == currentYear)
        cout<< "Congratulations " << name << ", you have graduated!" <<endl;
    else if (graduationYear < currentYear)
        cout<<"Hello there, alumn :)" << endl;
}