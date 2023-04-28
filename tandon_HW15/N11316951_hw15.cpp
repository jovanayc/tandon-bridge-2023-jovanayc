//Jovanay Carter, Extended Winter Bridge 2023, N11316951
//Homework 15 - April 28, 2023
//Linked lists

#include <iostream>
using namespace std;

template <class T>
class TemplateClass {
private:
    string name; //name of person
    T data; //int or double
public:
    Node (T n, string newName)
    Node *next;
    Node *prev;
};



class Node {
private:
    string name; //name of person
    T data; //int or double
public:
    Node (T n, string newName)
    Node *next;
    Node *prev;
};

class LinkedList {
private:
    Node *head;
    Node *tail;  

    void addNode(int n, string newName);  
};

void addNode(int n, string newName){ //on main: addNode(10, 'Carly');
    Node *temp = new Node;
    temp-> data = n;
    temp->next = nullptr;
};

//Traverse through the list
/*
    bool didIBuy(string item)
        Expense *temp = head;
        int count = 0;
        while (temp!= nullptr){ // loops through eveery node in linked list
            if (temp -> name == item){ //investigate if ptr has the item or not
                return true;
            }
            else {
                temp = temp->next; // move on to the next ptr if it is not present
            }
            return false;
        } 
        return false;
*/


