#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <set>
#include <unordered_map>

using namespace std;

//
// Created by catac_07fjpav on 11/22/2026.
//

#ifndef PROJECT3_GRAPH_H
#define PROJECT3_GRAPH_H

struct ClassInfo {
    string name;
    int locationId;
    int startMinutes; // only fro extra credit
    int endMinutes;
};

struct Student {
    string name;
    string id;
    int residenceId;
    set<string> classes;  // std::set keeps codes sorted, which printShortestEdges needs
};

struct Edge {
    int to;
    int weight;
    bool isOpen;
};

class Graph {
    unordered_map<int, vector<Edge>> graph; // by lcoation ID
    unordered_map<int, string> locations;

};


#endif //PROJECT3_GRAPH_H