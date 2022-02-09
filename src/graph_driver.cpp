#include <iostream>
#include "../include/GraphAdjMatrix.h"
using namespace std;

int main(){
    GraphAdjMatrix M1(5);
    M1.addEdge(1,2);
    M1.addEdge(2,4);
    M1.addEdge(4,3);
    M1.addEdge(3,1);
    cout<<M1;

    cout<<"\nBFS: " + string(M1.bfs(2));
    cout<<"\nDFS: " + string(M1.dfs(2));
    return 0;
}
