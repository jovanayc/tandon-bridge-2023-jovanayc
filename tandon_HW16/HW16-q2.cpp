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

    void addToQueue (const vector<T>& newThings){ //passing in a vector to allow for one or multiple items to be inserted at once.
       vect.insert(vect.end(), newThings.begin(), newThings.end());
      sizeOfQueue += newThings.size();
    }

    void popFromFront(int numPoppedItems){
      //check for items to be popped
      int count = vect.size(); //keep track of vector size internal to this function
      if (sizeOfQueue <= 0){
        while (!vect.empty()){ vect.pop_back(); } // when nothing is left in queue, "reset" all items in vector back to 0
        sizeOfQueue = 0; // and reseat size of Queue back to 0.
      } else {
        cout << "popped items: ";
        for (int i=startInd; i<numPoppedItems; i++){
          cout << vect[i] << " ";
        }
        cout << endl;
  
        startInd = numPoppedItems;//update starting index thereby updating the 'head' of the queue without changing the vector
  
        sizeOfQueue -= numPoppedItems;
      }
    }

    void getSizeOfQueue() const { // size of queue is different from size of vector; we want to pay attention to size of queue
      if (sizeOfQueue <= 0){
        cout << "\n Size of Queue: " << sizeOfQueue << endl;
        return;
      } else {
        cout << "\n Size of Queue: " << sizeOfQueue << endl;
        return;
      }
    }

    void printQueue() const { 
      if (sizeOfQueue == 0){
        cout << "Queue has been reset to 0" << endl;
      } else {
      for (int i = startInd; i < vect.size(); i++){ //start printing at startInd which updates based on popped items
            cout << vect[i] << " ";
        }
      cout << "End of printing" << endl;
      }
    }
};

int main(){
    //creating a queue of orders being processes for an online store; Data input is the amount paid for each order
    Queue<double> ordersProcessing; 
    vector<double> newOrders {55.6, 109.94, 263.10, 23, 13, 99, 104};//example numbers adding to queue
    ordersProcessing.addToQueue(newOrders);
    ordersProcessing.printQueue();
    ordersProcessing.popFromFront(2);
    ordersProcessing.printQueue();

    ordersProcessing.getSizeOfQueue();

    ordersProcessing.addToQueue(vector<double>{68.4, 9, 47, 5.50, 8});
    ordersProcessing.popFromFront(10); //pop all items from queue
    ordersProcessing.printQueue();
    ordersProcessing.getSizeOfQueue();

    return 0;
}