#ifndef OOP_ASSIGNMENT_PRIORITYQUEUE_H
#define OOP_ASSIGNMENT_PRIORITYQUEUE_H

#include <ostream>
#include "lib.h"

template<typename T>
class PriorityQueue {
    pqItem<T> *items;
    int count;
    unsigned MAX;
public:
    PriorityQueue(int n = 10) {
        items = new pqItem<T>[n];
        this->MAX = n;
    }

    ~PriorityQueue() {
        delete[] items;
    }

    bool enqueue(T value, int priority) {
        if (isFull())
            exit(1);
        count++;
        items[count].data = value;
        items[count].priority = priority;
        return true;
    }

    T dequeue() {
        if (isEmpty())
            exit(1);

        int ind = GetMaxPriority();
        T temp = items[ind];
        for (int i = ind; i < count; i++) {
            items[i] = items[i + 1];
        }
        count--;
        return temp;
    }

    int GetMaxPriority() {
        if (isEmpty())
            exit(1);

        int highestPriority = INT_MIN;
        int priority = -1;

        for (int i = 0; i <= count; i++) {
            if (highestPriority == items[i].priority && priority > -1
                && items[priority].value < items[i].data) {
                highestPriority = items[i].priority;
                priority = i;
            } else if (highestPriority < items[i].priority) {
                highestPriority = items[i].priority;
                priority = i;
            }
        }
        return priority;
    }

    T peek() {
        if (isEmpty())
            exit(1);
        return items[GetMaxPriority()];
    }

    bool isEmpty() {
        return count == -1;
    }

    bool isFull() {
        return count + 1 == MAX;
    }

    friend std::ostream &operator<<(std::ostream &os, const PriorityQueue &queue) {
        os << "items: ";
        if (queue.isEmpty())
            os << "Empty!";
        else
            for (int i = 0; i <= queue.size; i++) {
                os << queue.items << ", ";
            }
        return os;
    }
};


#endif //OOP_ASSIGNMENT_PRIORITYQUEUE_H
