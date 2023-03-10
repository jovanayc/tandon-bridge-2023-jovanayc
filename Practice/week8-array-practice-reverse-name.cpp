//Practice with Arrays: print the user input name "Donald Duck" in reverse order
//Example: "kcuD dlanoD"
#include <iostream>
#include <string>
using namespace std;

int main () {
    string name;

    cout << "Please enter a user name: " << endl;
    getline (cin, name);

    for (int ind = name.length()-1; ind >= 0; ind--){
        cout << name[ind];
    }

    cout << endl;

    return 0;
}

