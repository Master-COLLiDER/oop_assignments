#ifndef GRAPH_H
#define GRAPH_H

#include <list>
#include <map>
#include <ostream>

class Graph{
    std::map<int,std::list<int>> adjLists;
public:

    void addEdge(int u, int v) {
        adjLists[u].push_back(v);
        adjLists[v].push_back(u);
    }

    friend std::ostream &operator<<(std::ostream &os, const Graph &graph) {
        std::map<int,std::list<int>>  lists = graph.adjLists;
        std::map<int,std::list<int>>::iterator map_itr;
        os << "adjLists: \n";
        for(map_itr = lists.begin(); map_itr != lists.end(); map_itr++) {
            os<< map_itr->first << "--->";
            std::list<int> :: iterator listIterator;
            for(listIterator = map_itr->second.begin(); listIterator !=  map_itr->second.end(); listIterator++) {
                os << *listIterator << " ";
            }
            os << std::endl;
        }
        return os;
    }
};

#endif //GRAPH_H
