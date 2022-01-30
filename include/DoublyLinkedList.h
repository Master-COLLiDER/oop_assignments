#ifndef OOP_ASSIGNMENT_DOUBLYLINKEDLIST_H
#define OOP_ASSIGNMENT_DOUBLYLINKEDLIST_H

#include <ostream>
#include "lib.h"

template<typename T>
class DoublyLinkedList {
    typedef DllNode<T> *dllnodeprt;
    dllnodeprt head;
public:
    DoublyLinkedList(dllnodeprt head = NULL) {
        this->head = head;
    }

    ~DoublyLinkedList() {
        if (!isEmpty()) {
            while (head->prev != NULL)
                head = head->prev;
            dllnodeprt temp = head;
            while (temp != NULL) {
                head = head->next;
                delete temp;
                temp = head;
            }
        }
    }

    bool addToEnd(T inputData) {
        auto n = new DllNode(inputData);
        if (isEmpty()) {
            head = n;
        } else {
            dllnodeprt curr = head;
            while (curr->next != NULL) {
                curr = curr->next;
            }
            curr->next = n;
            n->prev = curr;
        }
        return true;
    }

    bool addToBegining(T inputData) {
        auto n = new DllNode(inputData);
        if (isEmpty()) {
            head = n;
        } else {
            dllnodeprt curr = head;
            while (curr->prev != NULL) {
                curr = curr->prev;
            }
            curr->prev = n;
            n->next = curr;
        }
        return true;
    }

    T deleteLast() {
        dllnodeprt toDelete = head;
        T temp;

        if (isEmpty())
            exit(1);

        if (head->next == NULL) {
            head = head->prev;
        } else {
            do {
                toDelete = toDelete->next;
            } while (toDelete->next != NULL);
        }
        temp = toDelete->data;
        if (toDelete->prev != NULL)
            toDelete->prev->next = NULL;
        delete toDelete;
        return temp;
    }

    T deleteFirst() {
        dllnodeprt toDelete = head;
        T temp;

        if (isEmpty())
            exit(1);
        if (head->prev == NULL) {
            head = head->next;
        } else {
            do {
                toDelete = toDelete->prev;
            } while (toDelete->prev != NULL);
        }
        temp = toDelete->data;
        if (toDelete->next != NULL)
            toDelete->next->prev = NULL;
        delete toDelete;
        return temp;
    }

    bool isEmpty() {
        return head == NULL;
    }

    T peek() {
        if (isEmpty())
            exit(1);
        return head->data;
    }

    bool walkBackward() {
        if (isEmpty())
            return false;
        if (head->prev != NULL) {
            head = head->prev;
            return true;
        }
        return false;
    }

    int walkForward() {
        if (isEmpty())
            return false;
        if (head->next != NULL) {
            head = head->next;
            return true;
        }
        return false;
    }

    friend std::ostream &operator<<(std::ostream &os, const DoublyLinkedList<T> &list) {
        os << "List: ";
        dllnodeprt current = list.head;
        if(current ==NULL)
            os<<"Empty!";
        else{
            while (current->prev!=NULL)
                current= current->prev;
            while (current!=NULL){
                os<<current->data<<", ";
                current = current->next;
            }
        }
        return os;
    }
};


#endif //OOP_ASSIGNMENT_DOUBLYLINKEDLIST_H
