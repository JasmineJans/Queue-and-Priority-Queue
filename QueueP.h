/**
 * This class is a representation of the abstract data type PriorityQueue.
 * This class is also a child class of Queue and inherits all its public
 * and protected methods. This data structure is implemented with an 
 * array and can take a maximum of 15 items of time QueueItemType. This 
 * queue is ordered and items are dequeued based on their value, the lowest
 * value exits the list first and as values come in their aren't placed at
 * the back butrather their correct ordered position.
 *
 * @author Jasmine Jans (jjans@ada.gonzaga.edu)
 * @version Assignment 1
 * @date January 22, 2013
 * @file QueueP.h
 */

/** @file QueueA.h */

//#include "QueueException.h"
#include "QueueA.h"

#ifndef PRIORITYQUEUEA_H
#define PRIORITYQUEUEA_H

//const int MAX_QUEUE = maximum-size-of-queue;
//typedef desired-type-of-queue-item QueueItemType;
//const int MAX_QUEUE = 15;
//typedef int QueueItemType;

/** @class Queue
 * ADT queue - Array-based implementation. */
class PriorityQueue: public Queue
{
public:
    // Constructors and destructor:
    /** Constructor that calls the constructor of parent class Queue */
    PriorityQueue();
    
    // Destructor and copy constructor are
    // supplied by the compiler.
    
    // PriorityQueue Operations:
    /**
     * This method adds an item of type QueueItemType to the queue in
     * its correct space according to the items value (front of the queue
     * is lowest, back is the highest).
     *@pre The queue must not be full and newItem is the item to be inserted
     *@post newItem is now inserted in its correct position in the queue.
     *@param newItem the new item to be added to the queue
     */
    virtual void enqueue(const QueueItemType& newItem);
    
    
}; // end Queue
#endif
// End of header file.
