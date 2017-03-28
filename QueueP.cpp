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
 * @date January 15, 2013
 * @file QueueP.cpp
 */

#include "QueueP.h"

PriorityQueue::PriorityQueue(){
    Queue : Queue();
}

void PriorityQueue::enqueue(const QueueItemType& newItem){
    int position = count-1;
    while (position >= 0 && items[position] >= newItem)
    {
        items[position+1] = items[position];
        --position;
    }
    items[position+1] = newItem;
    back++;
    count++;
}