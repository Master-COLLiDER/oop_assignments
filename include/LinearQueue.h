#ifndef OOP_ASSIGNMENT_LINEARQUEUE_H
#define OOP_ASSIGNMENT_LINEARQUEUE_H
#include <cstdlib>

template<typename T>
class LinearQueue{
    int front, rear;
    T *dataArray;
    unsigned size;
public:
    LinearQueue(const unsigned &size = 10){
        front = rear = -1;
        this->size = size;
        dataArray = new T[size];
    }
    ~LinearQueue(){
        delete[] dataArray;
    }

    bool enqueue(T inputData){
        if(isFull())
            exit(0);
        if(isEmpty())
            front++;
        dataArray[++rear] = inputData;

        return true;
    }

    T dequeue(){
        if(isEmpty())
            exit(0);
        T temp = dataArray[front];
        if(front == rear)
            front = rear = -1;
        else
            front++;
        return temp;
    }
    T peek(){
        if(isEmpty())
            exit(0);
        return dataArray[front];
    }
    bool isEmpty(){
        return front == -1;
    }
    bool isFull(){
        if(isEmpty())
            return false;
        return rear == size-1;
    }
};

#endif //OOP_ASSIGNMENT_LINEARQUEUE_H
