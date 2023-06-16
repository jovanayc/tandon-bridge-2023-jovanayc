#include <iostream>
using namespace std;

class Person{ //Person that owns or trades clothes

};

class Clothing { //clothing worn by a Person
private: 
    string articleName;
    string articleDescription;
public:
    bool articleOwner;
    string ownerName;

    Clothing (string newName, string newDescription) : articleName (newName), articleDescription (newDescription), articleOwner(false) {
        cout << "I'm a " << articleName << " and no one owns me yet :(" << endl;
    };

    //clothing methods
    string getClothingDescription (){
        cout << articleDescription << endl;
        return articleDescription;
    }

    bool isOwned () {
        if (articleOwner){
            cout << ownerName << endl;
            return true;
        } else 
            cout << "shirt is not owned" << endl;
            return false;    
    }

};

int main (){
    //test code for clothing class
    Clothing Shirt ("Zara Shirt", "Blue and yellow, stripped blouse, small size");
    string newOwner = "Abbigail";

    Shirt.ownerName = newOwner;
    cout << "Shirt Owner Name: " << Shirt.ownerName << endl;
    Shirt.isOwned();
    Shirt.getClothingDescription();

}