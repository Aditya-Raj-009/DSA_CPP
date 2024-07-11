#include<bits/stdc++.h>
using namespace std;
#pragma once

class GraphRepresentaion{
    private:
    int vertices,edges;
    public:
    GraphRepresentaion(int,int);
    void matrixRep();
    vector<int>* listRep();
};

 GraphRepresentaion::GraphRepresentaion(int vertices,int edges){
this->vertices = vertices;
this->edges = edges;
}

void GraphRepresentaion::matrixRep(){
    int graph[vertices+1][edges+1];

    for(int i=0; i<edges; i++){
        int u, v;
        cout<<"Enter 2 vertices one by one to connect: "<<endl;
        cin>>u>>v;
        graph[u][v] = 1;
        graph[v][u]= 1;
    }
    
}

vector<int>* GraphRepresentaion::listRep(){
    
    vector<int> adj[vertices+1]; //array of vector.
    for(int i = 0; i<edges; i++){
        int u, v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    
    for (int i = 0; i < edges; i++) {
        cout << i << "->";
        for (int& x : adj[i]) {
            cout << x << " ";
        }
        cout <<" "<<adj[i].size()<< endl;
    }
return adj;
}

