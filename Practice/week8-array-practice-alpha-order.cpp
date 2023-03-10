//Practice with Arrays: take user input of 3 words & print in alpha order
//Example: dolphin, cat, tiger should print as: cat, dolphin, tiger.

#include <iostream>
#include <string>
using namespace std;

int main() {
    string word1, word2, word3;
    int index;

    cout << "Please enter three words" << endl;
    getline(cin, word1);
    getline(cin, word2);
    getline(cin, word3);

    if (word1 <= word2 && word1 <= word3){
        cout << word1;
    } else if (word2 <= word1 && word2 <= word3){
        cout << word2 << endl;
    } else //word3 is the smallest
        cout << word3 << endl;

    return 0;
}