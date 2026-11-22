#pragma once
#include "Graph.h"
#include <string>

using namespace std;

class CampusCompass {
private:
    Graph graph;
    unordered_map<string, string> students; //id: name
    unordered_map<string, string> classes; //id: name
    string insert(const string& name, const string& id, int residenceId, const vector<string>& classCodes);
    string remove(const string& id);
    string dropClass(const string& id, const string& classCode);
    string replaceClass(const string& id, const string& oldCode, const string& newCode);
    string removeClass(const string& classCode);
    string toggleEdgesClosure(const vector<pair<int, int>>& edges);
    string checkEdgeStatus(int location1, int location2);
    string isConnected(int location1, int location2);
    string printShortestEdges(const string& id);
    string printStudentZone(const string& id);
    string verifySchedule(const string& id);
public:
    // Think about what helper functions you will need in the algorithm
    CampusCompass(); // constructor
    bool ParseCSV(const string &edges_filepath, const string &classes_filepath);
    bool ParseCommand(const string &command);
};
