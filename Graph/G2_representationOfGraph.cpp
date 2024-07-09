#include<bits/stdc++.h>
using namespace std;

class GraphRepresentaion{
    private:
    int vertices,edges;
    public:
    GraphRepresentaion(int,int);
    void matrixRep();
    void listRep();
};

 GraphRepresentaion::GraphRepresentaion(int vertices,int edges){
this->vertices = vertices;
this->edges = edges;
}

void GraphRepresentaion::matrixRep(){
    int graph[vertices+1][edges+1];

    for(int i=0; i<edges; i++){
        int u, v;
        cin>>u>>v;
        graph[u][v] = 1;
        graph[v][u]= 1;
    }
    
}

void GraphRepresentaion::listRep(){
    
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

