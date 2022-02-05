cmake_minimum_required(VERSION 3.21)
project(OOP_Assignment)

set(CMAKE_CXX_STANDARD 23)

add_executable(OOP_Assignment src/main.cpp)

add_executable(linearQueue src/linear_queue_driver.cpp include/lib.h include/LinearQueue.h )
add_executable(circularQueue src/circular_queue_driver.cpp include/lib.h include/CircularQueue.h)
add_executable(linkedLinearQueue src/linked_linear_queue_driver.cpp include/lib.h include/LinkedQueue.h)
add_executable(linkedCircularQueue src/linked_circular_queue_driver.cpp include/lib.h include/CircularQueue.h)
add_executable(priorityQueue src/priority_queue_driver.cpp include/lib.h include/PriorityQueue.h)
add_executable(doublyLinkedList src/doubly_linked_list_driver.cpp include/lib.h include/DoublyLinkedList.h)

add_executable(binaryTree src/binary_tree_driver.cpp include/lib.h include/BinaryTree.h)

add_executable(graph src/graph_driver.cpp include/Graph.h)