#include <bits/stdc++.h>
#include "G2_representationOfGraph.h"
using namespace std;

void DfsTraversal(vector<int> graph[], int start, vector<int>& visited) {
    visited[start] = 1;
    for (auto a : graph[start]) {
        if (!visited[a]) {
            DfsTraversal(graph, a, visited);
        }
    }
}

int NoOfProvinces(vector<int> graph[], int vertices) {
    vector<int> visited(vertices, 0);
    int provinces = 0;
    for (int i = 0; i < vertices; ++i) {
        if (!visited[i]) {
            DfsTraversal(graph, i, visited);
            provinces++;
        }
    }
    return provinces;
}

int main(int argc, char const *argv[]) {
    GraphRepresentaion* graph = new GraphRepresentaion(8,5);
    vector<vector<int>> grp = graph->listRep();
    vector<int> grap[8]; // Use 8 to match the number of vertices

    for (int i = 0; i < grp.size(); ++i) {
        for (int j = 0; j < grp[i].size(); ++j) { // Corrected nested loop
            if (grp[i][j]) {
                grap[i].push_back(j);
                grap[j].push_back(i);
            }
        }
    }

    int prov = NoOfProvinces(grap, 8);
    cout << "No of provinces: " << prov << endl;
    return 0;
}
