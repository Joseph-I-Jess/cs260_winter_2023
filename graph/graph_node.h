#pragma once

#include <string>
#include <vector>

#include "edge.h"

using std::string;
using std::vector;

struct GraphNode {
    string name; // name of city?
    vector<Edge *> neighbors; // "complex" edge object, because we may want ot ask for things such as distance or cost...
};