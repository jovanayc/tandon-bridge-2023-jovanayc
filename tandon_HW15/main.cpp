#include <iostream>
#include <fstream>
using namespace std;

template <class T>
class Person {
private:
    T val;
    string name;
    T amountOwed;
public:
    Person<T> *prev;
    Person<T> *next;

    Person(const T newVal, string newName) : val(newVal), name(newName){
        T amountOwed = T (0);
        this->prev=this->next = nullptr;
        //this->amountPaid = amountPaid;
    };

};

template <class T>
class LList{
public:
    Person<T> *head;
    Person<T> *tail;
    int size;
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
        //increase size of list
        this->size++;
    }

    void printList(){
        if(this->size==0){
            cout<<"List is empty"<<endl;
            return;
        }
        Person<T>* on=this->head;
        while(on!=nullptr){
            cout << on->val <<" " << on->name << "\n";
            on=on->next;
        }
        cout<<endl;
    }
};

//READ IN FILE
void readFile () {
    ifstream in_stream; //class that prints true or false if there is a file
    ofstream out_stream;
    string inputPath = "input.txt";
    string outputPath = "output.txt";

    //open files
    in_stream.open(inputPath);
    out_stream.open(outputPath);

    //check to make sure it worked!
    if (!in_stream){
        cout << "No Input File";
    }

    char c;
    string currLine;

    //print the output
    while (getline(in_stream, currLine)){ //read each line of input file
        //keep track of the new node
        //add node here

        // for (int i = 0; i < currLine.length(); i++) { //traverse through each character on the line
        //     if (currLine [i] >= '0' && currLine[i] <= '9'){ //print items from input file one by one
        //         cout << currLine[i];
        //         out_stream << currLine[i];
        //     }
        // }

        cout << endl; //go to next line
    }
    in_stream.close(); //close input file
    out_stream.close();

    //flow for doing math with nodes
    //-->find out if what the total amount is and how much they each need to pay or be owed when split evenly
    //--> set values for if they paid too much or paid too little
    //**------ loop through list, youtube adding values across nodes; keep a sum counter.
    //--> keep track of how many nodes you created
    //-->subtract the int value in each node from the amount
}

//at the end of the 

int main(){
    readFile();
    //create new node

    //Person(const T newAmountPaid, string newName)

    cout<<"Linked list initialized with one element"<<endl;
    Person<string>* start=new Person<string>("100","Tandon"); //calling an example node
    LList<string>* list=new LList<string>(start); //example list
    //list->printList();

    return 0;
}