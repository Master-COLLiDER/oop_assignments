#include <iostream>

#include "../include/DoublyLinkedList.h"

using namespace std;

void menu();

int main() {
    DoublyLinkedList<int> list;
    char choice;
    int inputData;

    while (true) {
        menu();
        cin >> choice;
        switch (choice) {
            case '1': {
                cout << "Enter the Data: ";
                cin >> inputData;
                if(list.addToBegining(inputData))
                    cout << "Added to beginning: \n"<<inputData;
                break;
            }
            case '2': {
                cout << "Enter the Data: ";
                cin >> inputData;
                if(list.addToEnd(inputData))
                    cout << "Added to End: \n"<<inputData;
                break;
            }

            case '3': {
                cout << "Removed first: " << list.deleteFirst() << "\n";
                break;
            }
            case '4': {
                cout << "Removed last: " << list.deleteLast() << "\n";
                break;
            }
            case '5': {
                cout << "Display: " << list << "\n";
                break;
            }
            case '6': {
                if(list.isEmpty())
                    cout << "List is Empty\n";
                else
                    cout << "List is not Empty\n";
                break;
            }
            case 'E': {
                cout << "Thank you\n";
                return 0;
            }
            case 'e': {
                cout << "Thank you\n";
                return 0;
            }
            default:
                cout << "Wrong Input\n";
        }
    }
}


void menu() {
    cout << "\nRoll no. CSM21002\n";
    cout << ":::Doubly Linked List Menu:::\n";
    cout << "1. Add To Beginning\n";
    cout << "2. Add To End\n";
    cout << "3. Delete First\n";
    cout << "4. Delete Last\n";
    cout << "5. Display\n";
    cout << "6. isEmpty\n";
    cout << "E. Exit\n";
    cout << "Enter your Choice:";
}
