//Jovanay Carter, Extended Winter Bridge 2023, N11316951
//Homework 15 - April 28, 2023
//Linked lists

#include <iostream>
#include <fstream>
using namespace std;

template <class T>
class Person {
public:
    T val;
    string name;
    T amountOwed;
    Person<T> *prev;
    Person<T> *next;

    Person(const T newVal, string newName) : val(newVal), name(newName){
        this->prev=this->next = nullptr;
        this->amountOwed = T(0);
    };

};

template <class T>
class LList{
public:
    Person<T> *head;
    Person<T> *tail;
    int size;
    double average;
    //initalize list constructor
    LList(Person<T>* input){
        this->head=this->tail=input;
        this->size = 1;
        
    }
    void addToEnd(Person<T>* newEnd){
        //move tail, next, and prev ptrs
        this->tail->next=newEnd;
        newEnd->prev=this->tail;
        this->tail=newEnd;
        this->size++;
    }

    void printList(string filename){
        ofstream out_stream;
        out_stream.open(filename);

        if(this->size==0){
            out_stream<<"List is empty"<<endl;//checks dummy head
            return;
        }
        Person<T>* on=this->head;
        while(on!=nullptr){
            //Note:amount owed to you, not amount that you owe
            if (on->amountOwed == 0){
                out_stream << on->name <<", you don't need to do anything" << "\n";
            } else if (on->amountOwed > 0){
                out_stream << on->name <<", you will be receiving payments from others of " << on->amountOwed << "\n";
            } else if (on->amountOwed < 0){
                out_stream << on->name <<", you will be giving " << abs(on->amountOwed) << "\n";
            }
            on=on->next;
        }
        out_stream<<endl;
        out_stream << "In the end, you should have all spent around " << this->average;
        
        out_stream.close();
    }

    double getAverage(){
        double billTotal = 0;

        //when called, method should loop through each node value and add each amountPaid to a sum total
        if(this->size==0){ //
            cout<<"List is empty, no values to total"<<endl;//checks dummy head
            return 0;
        }
        Person<T>* on=this->head;
        while(on!=nullptr){
            billTotal += on->val;
            on=on->next;
        }

        this->average = 0;
        this->average = billTotal /= (double)this->size;

        return this->average;
    }
    
    void setAmountOwed(){
        double average = this->getAverage();
        cout << average << endl; //Check for average
        
        //when called, method should loop through each node value and compare the value to amount owed
        if(this->size==0){ //
            cout<<"List is empty, no values to average"<<endl;//checks dummy head
            return;
        }

        Person<T>* on=this->head;
        while(on!=nullptr){
            on->amountOwed = on->val - average; //sets amount owed to positive or negative value 
            on=on->next;
        }
    }
};

//READ IN FILE
int main() {
    ifstream in_stream; //class that prints true or false if there is a file
    string inputPath = "input.txt"; // test file
    string outputPath = "output.txt";

    //open file
    in_stream.open(inputPath);
   
    //check to make sure file opened
    if (!in_stream){
        cout << "No Input File";
    }

    char c;
    string currLine;
    LList<double>* list= nullptr; //create list with null
    bool first = true;
    
    //getting each line from input and reading into a node
    while (getline(in_stream, currLine)){ //read each line of input file
        //add node here
        int i = 0;
        while(currLine [i] != ' ') { //look for space after the number
            i++;
        }
        
        //put numbers and name in line in variables
        double inputAmount = stod(currLine.substr(0,i)); //converts the string of just number to a double
        string inputName = currLine.substr(i+1); //uses substring to get to user name
        
        //start of new node with getline information
        Person<double>* p = new Person<double> (inputAmount, inputName); //creates new node with 
        if (first){ // if this is the first node created, then start list
           list =  new LList<double>(p);
           first = false;
        } else { // if not first node add to end
            list->addToEnd(p);
        }
    }
    //close input file
    in_stream.close();

    //loop through list to set amount and print amount owed values
    list->setAmountOwed();
    list->printList(outputPath);

    return 0;
}