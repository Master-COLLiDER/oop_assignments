#ifndef OOP_ASSIGNMENT_LINKEDQUEUE_H
#define OOP_ASSIGNMENT_LINKEDQUEUE_H


#include <ostream>

#include "lib.h"

template<typename T>
class LinkedQueue {
    typedef Node<T>* nodeptr;

    nodeptr front, rear;

public:

    LinkedQueue() {
        front = NULL;
        rear = NULL;
    }

    ~LinkedQueue(){
        nodeptr temp = front;
        while (front != NULL) {
            front = front->next;
            delete temp;
            temp = front;
        }
    }

    bool enqueue(T value) {
        auto temp = new Node<T>(value);

        if (temp == NULL)
            return false;

        if (rear != NULL)
            rear->next = temp;
        else {
            front = temp;
            rear = temp;
        }
        rear = temp;
        return true;
    }

    T dequeue() {
        if(front==NULL)
            exit(0);

        T value;
        nodeptr temp;

        temp = front;
        value = temp->data;


        if (front->next != NULL)
            front = front->next;
        else {
            front = NULL;
            rear = NULL;
        }

        delete temp;

        return value;
    }

    bool isEmpty() {
        return front == NULL;
    }

    T peek(){
        if(isEmpty())
            exit(1);

        return front->data;
    }


    friend std::ostream &operator<<(std::ostream &os, const LinkedQueue &queue) {

       nodeptr temp = queue.front;

        while(temp!=NULL) {
            os << temp->data << " -> ";
            temp=temp->next;
        }
        return os;
    }

};


#endif //OOP_ASSIGNMENT_LINKEDQUEUE_H
