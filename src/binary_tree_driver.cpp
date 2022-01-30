#include "../include/BinaryTree.h"
#include <iostream>

using namespace std;

int main() {
    char value;
    char ch;
    BinaryTree<char> tree;
    cout << "\nEnter the value of root node :";
    cin >> value;
    tree.Insert(value);
    do {
        cout << "\n1. Insert";
        cout << "\n2. Preorder Depth First";
        cout << "\n3. Inorder Depth First";
        cout << "\n4. Postorder Depth First";
        cout << "\nE. Exit";

        cout << "\nEnter Your Choice : ";
        cin >> ch;
        switch (ch) {
            case '1':


                cout << "\nEnter the value to be Inserted : ";
                cin >> value;
                tree.Insert(value);
                cout<<"\nInserted: "<<value;
                break;
            case '2':
                tree.PreOrder();
                break;
            case '3':
                tree.InOrder();
                break;
            case '4':
                tree.PostOrder();
                break;
            default:
                cout << "\nInvalid Choice";
        }
    } while (ch != 'E');
    return 0;
}