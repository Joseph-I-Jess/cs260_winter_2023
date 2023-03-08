#pragma once

#include "graph_node.h"

struct Edge {
    // add name and update code to act more like nodes?
    GraphNode *source;
    GraphNode *destination;
    int cost;
};