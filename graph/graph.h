#pragma once

#include "graph_node.h"
#include "edge.h"

class Graph {
    public:
        bool addNode(string name);
        bool addEdge(string source, string destination, int cost); // potentially add an add edges function?
        // maybe add an interactive add edge function that lists the node names that exist in the graph?
        bool removeNode(string name); // maybe also have it remove associated edges!
        bool removeEdge(string source, string destination);

        bool nodeExists(string name); // call to helper!
        bool edgeExists(string source, string destination);
        
        string toString();
            /*
                a -> b, c, e
                b -> d, q
                c -> a, b, e, q
                ...
            */

        string shortestPath(string name); // single-source shortest path
        string minimumSpanningTree();

    private:
        GraphNode *findNodeHelper(string name);
        Edge *findEdgeHelper(string source, string destination);
};