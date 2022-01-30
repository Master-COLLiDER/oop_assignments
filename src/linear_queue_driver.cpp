#include <iostream>

#include "../include/LinearQueue.h"

using namespace std;

void menu();

int main() {
    LinearQueue<int> queue;
    char choice;
    int inputData;

    while (true) {
        menu();
        cin >> choice;
        switch (choice) {
            case '1': {
                cout << "Enter the Data: ";
                cin >> inputData;
                if(queue.enqueue(inputData))
                  cout << "Enqueued \n"<<inputData;
                break;
            }
            case '2': {
                cout << "Removed: " << queue.dequeue() << "\n";
                break;
            }
            case '3': {
                cout << "Peek: " << queue.peek() << "\n";
                break;
            }
            case '4': {
                if(queue.isEmpty())
                    cout << "Queue is Empty\n";
                else
                    cout << "Queue is not Empty\n";
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
    cout << ":::Linear LinkedQueue Menu:::\n";
    cout << "1. Enqueue\n";
    cout << "2. Dequeue\n";
    cout << "3. Peek\n";
    cout << "4. isEmpty()\n";
    cout << "E. Exit\n";
    cout << "Enter your Choice:";
}
