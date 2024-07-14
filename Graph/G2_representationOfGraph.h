#include<bits/stdc++.h>
using namespace std;
#pragma once

class GraphRepresentaion{
    private:
    int vertices,edges;
    public:
    GraphRepresentaion(int,int);
    void matrixRep();
    vector<vector<int>> listRep();
};

 GraphRepresentaion::GraphRepresentaion(int vertices,int edges):vertices(vertices),edges(edges){
// this->vertices = vertices;
// this->edges = edges;
}

void GraphRepresentaion::matrixRep(){
    int graph[vertices][edges];

    for(int i=0; i<edges; i++){
        int u, v;
        cout<<"Enter 2 vertices one by one to connect: "<<endl;
        cin>>u>>v;
        graph[u][v] = 1;
        graph[v][u]= 1;
    }
    
}

    vector<vector<int>> GraphRepresentaion::listRep() {
        vector<vector<int>> adj(vertices); // vector of vectors
        for (int i = 0; i < edges; i++) {
            int u, v;
            cout<<"Enter 2 vertices one by one to connect: "<<endl;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        for (int i = 0; i < vertices; i++) { 
            cout << i << " -> ";
            for (int x : adj[i]) {
                cout << x << " ";
            }
            cout<<endl;
        }
        return adj;
    }

    
    
