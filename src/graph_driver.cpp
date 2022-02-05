#include <iostream>
#include "../include/Graph.h"
using namespace std;

int main(){
    Graph M1,M2;
    M1.addEdge(1,2);
    M1.addEdge(2,4);
    M1.addEdge(4,3);
    M1.addEdge(3,1);
    cout<<M1;
//    M2.addEdge(1,3);
//    M2.addEdge(3,2);
//    M2.addEdge(2,4);
//    cout<<M2;

    return 0;
}
