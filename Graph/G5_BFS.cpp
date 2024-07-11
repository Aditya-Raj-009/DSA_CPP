#include<bits/stdc++.h>
#include "G2_representationOfGraph.h"
using namespace std;


/**
 * Space complaxity: O(vertices)
 *  Time Complexity: O(V+E)
 */
vector<int> bfsOfGraph(int v, vector<int> adj[])
{
    int vis[v] = {0};
    vis[0] = 1;

    queue<int> q;
    q.push(0); // start vertex is 0

    vector<int> bfs;

    while(!q.empty())
    {
        int node = q.front();
        q.pop();

        bfs.push_back(node);

        for(int i: adj[node]){ // all neighbor

            if(!vis[i]){
                vis[i] = 1; // visit neighbout
                q.push(i);
            }
        }
    }
    return bfs;
}

int main(int argc, char const *argv[])
{
     int v,e;
    cout<<"Enter number of vertices: "<<endl;
    cin>>v;
    cout<<"Enter number of edges: "<<endl;
    cin>>e;

    GraphRepresentaion* graph = new GraphRepresentaion(v,e);
    graph->listRep();



    return 0;
}
