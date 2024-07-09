#include<bits/stdc++.h>
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
    q.push(0);

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
    /* code */
    return 0;
}
