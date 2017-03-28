/**
 * This class is a representation of the abstract data type Queue.
 * This data structure is implemented with an array and can take a
 * maximum of 15 items of time QueueItemType. This queue is in a first
 * in, first out basis where all new items are added to the back and
 * leave from the front.
 *
 * @author Jasmine Jans (jjans@ada.gonzaga.edu)
 * @version Assignment 1
 * @date January 15, 2013
 * @file QueueA.cpp
 */

#include "QueueA.h"

Queue::Queue(){
    back=0; //sets the back of queue to 0
    front=0; //sets the front of queue to 0
    count=0; //sets number of items in the queue to zero
}

bool Queue::isEmpty() const{
    if(count == 0) //when there are no items, the queue is empty
        return true;
    else
        return false;
}

QueueItemType Queue::getFront(){
    return items[front];
}

void Queue::dequeue(){
    if(!isEmpty()) //can't dequeue from an empty queue
    {
        for(int i=0; i < back-1; i++){
            items[i] = items[i+1];
        }
        back--;
        count--;
    }
}

void Queue::enqueue(const QueueItemType& newItem){
    if(count != MAX_QUEUE) //can't enqueue onto a full queue
    {
        items[back] = newItem;
        back++;
        count++;
    }
}



    

