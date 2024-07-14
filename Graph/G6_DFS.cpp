#include <bits/stdc++.h>
#include "G2_representationOfGraph.h"
using namespace std;

void DFS_Trav(int node, vector<vector<int>> graph, int visited[], vector<int> dfs)
{

    visited[node] = 1;
    dfs.push_back(node);
    for (auto it : graph[node])
    {
        if (!visited[it])
        {
            DFS_Trav(it, graph, visited, dfs);
        }
    }
    return;
}
vector<int> DFS(vector<vector<int>> graph, int v)
{

    int vis[v] = {0};
    int start = 0;
    vector<int> dfs;
    DFS_Trav(start, graph, vis, dfs);

    return dfs;
}
int main(int argc, char const *argv[])
{
    int v, e;
    cout << "Enter number of vertices: " << endl;
    cin >> v;
    cout << "Enter number of edges: " << endl;
    cin >> e;

    GraphRepresentaion *graph = new GraphRepresentaion(v, e);
    
    vector<int> dfs = DFS(graph->listRep(), v);

    cout << "traversing: " << endl;
    for (auto i : dfs)
    {
        cout << i << " ";
    }

    return 0;
}
