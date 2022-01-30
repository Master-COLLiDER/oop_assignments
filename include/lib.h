#ifndef OOP_ASSIGNMENT_LIB_H
#define OOP_ASSIGNMENT_LIB_H

#include <cstdlib>

template<typename T>
struct Node{
    T data;
    Node *next;
    explicit Node(T data):data(data),next(NULL){}
};

template<typename T>
struct DllNode {
    T data;
    DllNode *prev;
    DllNode *next;
    explicit DllNode(T data) : data(data), next(NULL), prev(NULL) {}
};

template<typename T>
struct pqItem{
    T data;
    int priority;
};


#endif //OOP_ASSIGNMENT_LIB_H
