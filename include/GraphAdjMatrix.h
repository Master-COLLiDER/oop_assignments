#pragma once

#include <vector>
#include <ostream>

class GraphAdjMatrix{
    std::vector<std::vector<int>> _adj;
public:
    explicit GraphAdjMatrix(unsigned  = 1);
    void addEdge(unsigned , unsigned );
    std::string bfs(unsigned = 0);
    std::string dfs(unsigned = 0);
    bool isCyclicGraph();
    bool detectCycle(unsigned);
    friend std::ostream &operator<<(std::ostream &os, const GraphAdjMatrix &graph);
};

