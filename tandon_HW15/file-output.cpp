#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main () {
    ifstream in_stream; //class that prints true or false if there is a file
    ofstream out_stream;
    string inputPath = "input.txt";
    string outputPath = "output.txt";

    //open files
    in_stream.open(inputPath);
    out_stream.open(outputPath);

    //check to make sure it worked!
    if (!in_stream){
        cout << "Nope";
        return 1;
    }

    char c;
    string currLine;

    while (getline(in_stream, currLine)){
        for (int i = 0; i < currLine.length(); i++) {
            if (currLine [i] != ' '){
                cout << currLine[i];
                out_stream << currLine[i];
            }
        }
        out_stream << "\n";
        cout << endl;
    }
    in_stream.close();
}