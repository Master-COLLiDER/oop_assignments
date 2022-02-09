
#include "GraphAdjMatrix.h"


GraphAdjMatrix::GraphAdjMatrix(unsigned V) : _adj(std::vector<std::vector<int>>(V, std::vector<int>(V, 0))) {

}


void GraphAdjMatrix::addEdge(unsigned src, unsigned dest) {
    _adj[src][dest] = 1;
    _adj[dest][src] = 1;
}

std::ostream &operator<<(std::ostream &os, const GraphAdjMatrix &graph) {

    os << "GraphAdjMatrix:\n";
    for (const auto &row: graph._adj) {
        for (int col: row) {
            os << col << " ";
        }
        os << std::endl;
    }

    return os;
}

std::string GraphAdjMatrix::bfs(unsigned int start) {
    std::string os;
    std::vector<bool> visited(_adj.size(), false);
    std::vector<int> Q;
    Q.push_back(start);

    visited[start] = true;

    int deqed;
    while (!Q.empty()) {
        deqed = Q[0];
        os += std::to_string(deqed) + " ";
        Q.erase(Q.begin());
        for (int i = 0; i < _adj[deqed].size(); i++)
            if (_adj[deqed][i] == 1 && (!visited[i])) {
                Q.push_back(i);
                visited[i] = true;
            }
    }
    return os;
}

std::string GraphAdjMatrix::dfs(unsigned start) {

    std::string os;
    std::vector<bool> visited(_adj.size(), false);
    std::vector<int> stack;

    stack.push_back(start);
    visited[start] = true;

    int popped;
    while (!stack.empty()) {
        popped = stack.back();
        stack.pop_back();
        os += std::to_string(popped) + " ";
        for (int i = 0; i < _adj[popped].size(); i++)
            if (_adj[popped][i] == 1 && (!visited[i])) {
                stack.push_back(i);
                visited[i] = true;
            }
    }
    return os;
}


bool GraphAdjMatrix::isCyclicGraph() {

    for (int i = 0; i < _adj.size(); ++i) {
        if(detectCycle(i))
            return true;
    }
    return false;
}

bool GraphAdjMatrix::detectCycle(unsigned start) {

    std::vector<bool> visited(_adj.size(), false);
    std::vector<int> parent(_adj.size(), -1);
    std::vector<int> stack;

    stack.push_back(start);
    int popped;
    while (!stack.empty()) {
        popped = stack.back();
        stack.pop_back();

        if(visited[popped])
            return true;
        visited[popped] = true;

        for (int V = 0; V < _adj[popped].size(); V++)
            if (_adj[popped][V] == 1 && (V != parent[popped])) {
                stack.push_back(V);
                parent[V] = popped;
            }
    }
    return false;
}


