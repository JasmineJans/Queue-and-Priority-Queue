/**
* @author Jasmine Jans (jjans@ada.gonzaga.edu)
* @version Assignment 1
* @date January 15, 2013
* @file QueueTest.cpp
*/

#include "QueueA.h"
#include "QueueP.h"
#include <iostream>

using namespace std;

int main(){
    
    Queue A = Queue(); //creates a regular queue
    PriorityQueue P = PriorityQueue(); //creates a priority queue
    
    cout << "First, 4 ints (3, 4, 1, 10) are added to Queue A" << endl;
    A.enqueue(3);
    A.enqueue(4);
    A.enqueue(1);
    A.enqueue(10);
    
    cout << "Now we will call getFront, and 3 should be returned." << endl;
    cout << A.getFront() <<endl;
    
    cout<< "Now we will call dequeue. 3 should exit the queue and when we call getFront again, 4 should be returned instead of 3." << endl;
    
    A.dequeue();
    cout << A.getFront() << endl;
    
    cout << "Now, when we call isEmpty, it should say False or print 0." << endl;
    cout << A.isEmpty() <<endl;
    
    cout << "Now after we call dequeue to remove the remaining 3 ints from the queue, the isEmpty method should return True or print 1." << endl;
    A.dequeue();
    A.dequeue();
    A.dequeue();
    cout<< A.isEmpty() << endl;
    
    cout <<"For the priority queue, the same 4 ints (4, 3, 1, 10) will be added using the enqueue method in the exact order listed to Queue P." << endl;
    
    P.enqueue(4);
    P.enqueue(3);
    P.enqueue(1);
    P.enqueue(10);
    
    cout << "Now when we will call getFront, 1 should be returned." << endl;
    cout << P.getFront() << endl;
    
    cout << "Now we will call dequeue. 1 should exit the queue and 3 should takes its place in the front, and will be returned when we call getFront after dequeueing." << endl;
    P.dequeue();
    cout << P.getFront() << endl;
    
    cout << "Now we will call enqueue and add the number 2 to the list. This should take 3s place at the front and will be returned when we call getFront." << endl;
    P.enqueue(2);
    cout << P.getFront() << endl;
    
    cout << "Lastly, we will dequeue and print the newFront of the remainder of the list until it is empty. This should display: 3, 4, 10" << endl;
    
    P.dequeue();
    cout << P.getFront() << " ";
    P.dequeue();
    cout << P.getFront() << " ";
    P.dequeue();
    cout << P.getFront() << endl;
    P.dequeue();

    cout << "Now that all ints have been dequeued, the isEmpty method should print True or 1." << endl;
    cout << P.isEmpty() << endl;
}


