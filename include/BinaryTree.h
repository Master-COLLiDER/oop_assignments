#ifndef OOP_ASSIGNMENT_BINARYTREE_H
#define OOP_ASSIGNMENT_BINARYTREE_H


#include "lib.h"
#include <iostream>
#include "CircularQueue.h"


template<typename T>
class BinaryTree {
    typedef bTreeNode<T> treeNode;
    typedef treeNode* nodeptr;
    typedef CircularQueue<nodeptr> NodePointerQueue;

    nodeptr _root;




    nodeptr InsertNode(nodeptr root, T data) {
        if (root == NULL) {
            root = new treeNode(data);
            return root;
        }

        NodePointerQueue queue;
        queue.enqueue(root);

        while (!queue.isEmpty() ) {
            nodeptr temp = queue.dequeue();

            if (temp->left != NULL)
                queue.enqueue(temp->left);
            else {
                temp->left = new treeNode(data);
                return root;
            }

            if (temp->right != NULL)
                queue.enqueue(temp->right);
            else {
                temp->right = new treeNode(data);
                return root;
            }
        }
        return root;
    }


    void PreOrder(nodeptr n) {
        if (n != NULL) {
            std::cout << n->data << "  ";
            PreOrder(n->left);
            PreOrder(n->right);
        }
    }

    void InOrder(nodeptr n) {
        if (n != NULL) {
            InOrder(n->left);
            std::cout << n->data << "  ";
            InOrder(n->right);
        }
    }

    void PostOrder(nodeptr n) {
        if (n != NULL) {
            PostOrder(n->left);
            PostOrder(n->right);
            std::cout << n->data << "  ";
        }
    }



public:
    BinaryTree() : _root(NULL) {   }

    void  Insert(T data){
        this->_root =  InsertNode(this->_root,data);
    }

    void PreOrder(){PreOrder(this->_root);}
    void InOrder(){InOrder(this->_root);}
    void PostOrder(){PostOrder(this->_root);}

};


#endif //OOP_ASSIGNMENT_BINARYTREE_H
