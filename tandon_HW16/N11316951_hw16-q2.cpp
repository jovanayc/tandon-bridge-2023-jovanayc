//Jovanay Carter, Extended Winter Bridge 2023, N11316951
//Homework 16 - May 5, 2023
//Queues

#include <iostream>
#include <vector>
using namespace std;

template <class T>
class Queue{ // first in, first out
private:
    vector <T> vect;
    int startInd, sizeOfQueue;
    int startOfQueue, endOfQueue; // 'head' and 'tail'

public:
    Queue() {
        //constructor initializers for starting new object
        startInd = 0;
        sizeOfQueue = 0;
        startOfQueue = vect[startInd]; //'head'
        endOfQueue = vect[sizeOfQueue]; // 'tail'
    };

    void addToQueue (T newThing){ //passing in a vector to allow for one or multiple items to be inserted at once.
      vect.push_back(newThing);
      sizeOfQueue ++;
    }

    void popFromFront(){
      // when nothing is left in queue, "reset" all items in vector back to 0
      if (sizeOfQueue == 0){
        while (!vect.empty()){ 
          vect.pop_back(); 
        } 
        sizeOfQueue = 0; // and reseat size of Queue back to 0.
      } else {
        //print popped items starting at starting index
        cout << "Popped item: " << vect[startInd] << endl;
        //update starting index thereby updating the 'head' of the queue without changing the vector
        startInd ++;
        sizeOfQueue --;
      }
    }

    bool empty() const {
      return startOfQueue == endOfQueue;
    }

    void getSizeOfQueue() const { // size of queue is different from size of vector; we want to pay attention to size of queue
      cout << "\n Size of Queue: " << sizeOfQueue << endl;
      return;
    }

    void printQueue() const { 
      if (sizeOfQueue == 0){
        cout << "Queue has been reset to 0" << endl;
      } else {
      for (int i = startInd; i < vect.size(); i++){ //start printing at startInd which updates based on popped items
            cout << vect[i] << " ";
        }
      cout << "End of queue" << endl;
      }
    }
};

int main(){
    //creating a queue of orders being processes for an online store; Data input is the amount paid for each order
    Queue<double> ordersProcessing;

    ordersProcessing.addToQueue(17.99);
    ordersProcessing.addToQueue(113.92);
    ordersProcessing.addToQueue(75);
    ordersProcessing.addToQueue(0.13);

    ordersProcessing.printQueue();
    ordersProcessing.popFromFront();
    ordersProcessing.printQueue();
    ordersProcessing.getSizeOfQueue();

    return 0;
}