#include <iostream>
using namespace std;

class Clothing { //clothing worn by a Person
private: 
    string articleName;
    string articleDescription;

public:
    bool articleOwner;
    string ownerName;
    Clothing* itemPtr; //in order to access item

    //copy constructor
    Clothing (string newName, string newDescription) : articleName (newName), articleDescription (newDescription), articleOwner(false) {
        cout << "I'm a " << articleName << " and no one owns me yet :(" << endl;
        itemPtr = nullptr;
    };

    //clothing methods
    string getClothingDescription (){
        cout << articleDescription << endl;
        return articleDescription;
    }

    bool isOwned () {
        if (!articleOwner){
            cout << "shirt is not owned" << endl;
            return false; 
        } else 
            cout << ownerName << endl;
            return true; 
    }

    //deconstructor
    ~Clothing();
};

class Person{ //Person that owns or trades clothes
private: 
    string personName;
    int inventory;

public:
    //copy constructor
    Person (string newName) : personName (newName) {
        //set person name to jane doe if they do not enter a name or enter a blank space
        if (newName == "" || newName == " "){
            personName = "Jane Doe";
        }

        inventory = 0;
    };

    //methods
    string getPersonName () {
        //print and return personName
        cout << personName << endl;
        return personName;
    };

    void purchaseClothing (Clothing* name) {
        if (name->itemPtr != nullptr){ //if the item is already assigned to another person
            //reject purchase
            cout << "Item is already owned. Cannot complete purchase." << endl;
        } else {
            name->itemPtr = personName;
            inventory ++;
            return true;
        }  
    }

    void countInventory(){
        cout << "Current Inventory count: " << inventory << endl;
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

    //test code for person class
    Person Jovanay ("Jovanay");
    Jovanay.getPersonName();
    Jovanay.countInventory();

}