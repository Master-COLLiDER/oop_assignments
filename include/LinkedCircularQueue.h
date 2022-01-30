#ifndef OOP_ASSIGNMENT_LINKEDCIRCULARQUEUE_H
#define OOP_ASSIGNMENT_LINKEDCIRCULARQUEUE_H
#include "lib.h"

template<typename T>
class LinkedCircularQueue{
    typedef  Node<T>* nodeptr;
    nodeptr rear;
public:
    LinkedCircularQueue(nodeptr rear = NULL){
        this->rear = rear;
        if(this->rear!=NULL)
            this->rear->next = this->rear;
    }

    bool enqueue(T inputData){
        nodeptr n = new Node(inputData);
        if(rear == NULL) {
            n->next = n;
        }else{
            n->next = rear->next;
            rear->next = n;
        }
        rear = n;
        return  true;
    }
    T dequeue(){
        if(rear == NULL)
            exit(1);
        T temp = rear->next->data;
        nodeptr tempNode = rear->next;
        if(rear->next==rear)
            rear == NULL;
        else
            rear->next = rear->next->next;
        delete tempNode;
        return temp;
    }

    T peek(){
        if(rear ==  NULL){
            exit(1);
        }
        return rear->next->data;
    }
    bool isEmpty(){
        return rear == NULL;
    }
};

#endif //OOP_ASSIGNMENT_LINKEDCIRCULARQUEUE_H
