#ifndef OOP_ASSIGNMENT_CIRCULARQUEUE_H
#define OOP_ASSIGNMENT_CIRCULARQUEUE_H

#include <cstdlib>

template<typename T>
class CircularQueue{
    int front, rear;
    T *dataArray;
    unsigned size;
public:
    CircularQueue(const unsigned &size = 10){
        front = rear = -1;
        this->size = size;
        this->dataArray = new T[size];
    }
    ~CircularQueue(){
        delete[] dataArray;
    }
    bool isEmpty(){
        return front == -1;
    }
    bool isFull(){
        if(isEmpty())
            return false;

        return (rear+1)%size == front;
    }

    bool enqueue(T inputData){
        if(isFull()){
            resize();
        }
        if(isEmpty())
            front++;
        rear = (rear+1)%this->size;
        dataArray[rear] = inputData;

        return true;
    }

    T dequeue(){
        if(isEmpty()){
            exit(1);
        }
        T temp = dataArray[front];
        if(front == rear)
             front = rear = -1;
        else
            front = (front+1) % size;
        return temp;
    }

    T peek(){
        if(isEmpty())
            exit(1);
        return dataArray[front];
    }

    void resize(){
        T  *old = dataArray;

        dataArray = new T[size*2];

        int i = 0;
        int j = front;

        do{
            dataArray[i++] = old[j];
            j = (j+1)%size;
        } while (j != front);

        front = 0;
        rear = size-1;
        delete[] old;
        size = size * 2;
    }


};


#endif //OOP_ASSIGNMENT_CIRCULARQUEUE_H
