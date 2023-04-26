#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main () {
    ifstream file; //class that prints true or false if there is a file
    string filePath = "this/is/filepath";
    file.open(filePath);

    //check to make sure it worked!
    if (!file){
        cout << "Nope";
        return 1;
    }

    char c;
    vector <char> v;

    while (file.get(c)){
        v.push_back(c);
    }

    file.close();
}