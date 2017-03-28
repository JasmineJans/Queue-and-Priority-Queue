/**
 * This class is a representation of the abstract data type Queue.
 * This data structure is implemented with an array and can take a
 * maximum of 15 items of time QueueItemType. This queue is in a first
 * in, first out basis where all new items are added to the back and 
 * leave from the front.
 *
 * @author Jasmine Jans (jjans@ada.gonzaga.edu)
 * @version Assignment 1
 * @date January15, 2013
 * @file QueueA.h
 */

//#include "QueueException.h"
#ifndef QUEUEA_H
#define QUEUEA_H

//const int MAX_QUEUE = maximum-size-of-queue;
//typedef desired-type-of-queue-item QueueItemType;
const int MAX_QUEUE = 15;
typedef int QueueItemType;

/** @class Queue
 * ADT queue - Array-based implementation. */
class Queue
{
public:
    // constructors and destructor:
    /** Constructor that initializes front, back, count */
    Queue();
    
    // copy constructor and destructor are
    // supplied by the compiler
    
    // Queue operations:
    /**
     * This method checks to see if the queue is empty.
     *@pre none.
     *@post none.
     *@returns true if queue is empty, false otherwise
     */
    bool isEmpty() const;
    /**
     * This method adds an item of type QueueItemType to the back of the queue
     *@pre The queue must not be full and newItem is the item to be inserted
     *@post newItem is now at the back of the queue.
     *@param newItem the new item to be added to the queue
     */
    virtual void enqueue(const QueueItemType& newItem);
    /* *
     *This method removes the item at the front of the queue.
     *@pre the queue is not empty.
     *@post if the queue is not empty, then the item at the front of the list
     *      will be removed from the queue.
     */
    void dequeue();
    /**
     * Gets the item at the front of the queue and returns it.
     *@pre the queue is not empty.
     *@post the item at the front of the queue stays the same, just gets returned.
     *@param
     *@returns Any returned value 3.d.
     *@throw Any exceptions that may be thrown 3.e.
     *@usage How the function is called 3.f.
     */
    QueueItemType getFront();
    
    
protected:
    /** the array with 15 spaces that holds items of type QueueItemType */
    QueueItemType items[MAX_QUEUE];
    /**  the front of the queue (space 1 in the items array) */
    int           front;
    /** the back of the queue */
    int           back;
    /** the amount of items in the queue */
    int           count;
}; // end Queue
#endif
// End of header file.

