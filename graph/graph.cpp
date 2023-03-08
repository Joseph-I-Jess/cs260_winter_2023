#include "graph.h"

// Add a node using name, returns true if the node is added, false otherwise
bool Graph::addNode(string name) {

}

// Add an edge using source and destination as names of nodes to connect, returns true if the edge is added, false otherwise
bool Graph::addEdge(string source, string destination, int cost) {

}

// Remove a node if it exists, returns true if a node is removed, false otherwise
bool Graph::removeNode(string name) {

}

// Remove an edge if it exists, returns true if an edge is removed, false otherwise
bool Graph::removeEdge(string source, string destination) {

}

// Check if a node exists with the given name, returns true if node exists, false otherwise...
bool Graph::nodeExists(string name) {

}

// Check if an edge exists with the given name, returns true if edge exists, false otherwise...
bool Graph::edgeExists(string source, string destination) {

}

/* Print out all nodes and edges in the form:
    a -> b, c, e
    b -> d, q
    c -> a, b, e, q
    ...
*/
string Graph::toString() {

}

// Find shortest path from node with name to each other node that can be reached, returns a string with that information
string Graph::shortestPath(string name) {

}

// Find a minimum spanning tree and return it.
string Graph::minimumSpanningTree() {

}

// Start of private functions
// Finds the node with name, return pointer to that node
GraphNode *Graph::findNodeHelper(string name) {

}

// Finds the edge with named source and destination, return pointer to that edge
Edge *Graph::findEdgeHelper(string source, string destination) {

}

