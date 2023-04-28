//Jovanay Carter, Extended Winter Bridge 2023, N11316951
//Homework 15 - April 28, 2023
//Linked lists

#include <iostream>
using namespace std;

template <class Temp>
class AList{
    AListNode<Temp>* head; //pntr to head
    AListNode<Temp>* recursiveCopy(AListNode<Temp>* rhs); //pntr to node


public:
    AList () : head (nullptr) {}; //sets head node to nullptr
    
    //big three operations
    AList (const AList& rhs) : head(nullptr) { *this = rhs; } // constructor
    AListNode(<Temp>& operator= (const AList<Temp>& rhs); // assignment operator
    ~AList() { clear (); }; //destructor
    
    void insertAtHead (Temp newData); // method to update head data
    Temp removeFromHead();// method to remove data point from head

    bool isEmpty()const { return head == nullptr; }// checks if head ptr is null
    void clear();// eliminates nulls by calling remove from head in a loop; while not isEmpty, remove from head 
    
    void insertAtEnd(Temp newData);
    void insertAtPoint(AListNode<Temp>* ptr, Temp newData);
    int size() const;
};

int main(){
    return 0;
}

/*
    stopping at the end
        while (end-> next != nullptr)
            end = end -> next;
            end -> next = temp;

    going off the end
        while (temp != nullptr)
            cout++;
            temp = temp->next;


*/