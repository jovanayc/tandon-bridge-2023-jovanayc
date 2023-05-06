//Jovanay Carter, Extended Winter Bridge 2023, N11316951
//Homework 16, Q1 - May 5, 2023
//Stack

#include <iostream>
#include <fstream>
using namespace std;


template <class T>
class Node {
private:
    T data;
    Node<T>* prev;
    Node<T>* next;
public: 
    Node(T newDate) : data (newDate){
        this->prev=this->next = nullptr; // starting with nullptrs
    } 
};

template<class T>
class LList {
public:
    LList<T>* top;
    LList<T>* bottom;

    LList () : { this->top=this->bottom = nullptr; size = 0; } //constructor with head & tail

    void addToTop (Node<T>* latestNode){
        this->top->next = latestNode; // assign tail's next ptr
        latestNode->prev = this->top; //assign latestNode's prev ptr
        this->top = latestNode; // re-assign tail ptr
        size++;

        if (size == 1){
            this->bottom = latestNode; //assign the first node to be the bottom of the stack
        }
    }

    void popFromTop ()
        Node<T>* temp = this->top;
        this->top->prev = this->top;//re-assign top pointer to the second item in list, thereby popping the first item
        delete temp;
        size--;

};


template <class T>
class Brackets {
private:
    T fileName;
public:
    Brackets(T newFileName) : fileName (newFileName) { }; // constructor

    bool areBracketsPresent (T filename) {
        ifstream.open(filename); //open file

        //check if file opened properly
        if (!filename){
            cout << "File error: could not open file" << endl;
            return false;
        }

        LList<string>* stack = nullptr;
        char c; //template variable that will point to each character
        while(filename.get(c)){
            if (c == '(' || c == '{' || c == '['){
                //start of new node with file information
                Node<string>* n = new Node<string> (c); //creates new node with character info
                stack.addToTop(n);
        } else if (c == ')' || c == '}' || c == ']'){
            stack.popFromTop();
            //find when c = ({[ && variable top = )}], then stacl.popFromTop();

            }
            
        }

    }

};



//READ IN FILE
int main() {
    Brackets test (string "file.txt");

    return 0;
}