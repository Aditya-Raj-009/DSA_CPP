#include<bits/stdc++.h>
using namespace std;

class NearestCell{
    private:
    int isSafe(int nrow, int ncol, int row, int col, vector<vector<int>> visited){
        return nrow>=0 && nrow<row && ncol>=0 && ncol<col && !visited[nrow][ncol];
    }
    public:
    vector<vector<int>> nearestCell_1(vector<vector<int>> matrix){
        vector<vector<int>> visited(matrix.size(),vector<int>(matrix[0].size(),0));
        vector<vector<int>> distance(matrix.size(),vector<int>(matrix[0].size(),0));
        queue<pair<pair<int,int>,int>> q;
        for(int i = 0; i<matrix.size(); i++)
        {
            for(int j = 0; j<matrix[0].size(); j++)
            {
                if(matrix[i][j] == 1)
                {
                    visited[i][j] = 1;
                    q.push({{i,j},0});
                }
            }
        }

        int r[] = {-1,0,1,0};
        int c[] = {0,1,0,-1};

        while (!q.empty())
        {
           int x = q.front().first.first;
           int y = q.front().first.second;
           int dis = q.front().second;
            q.pop();
           distance[x][y] = dis;

           for(int i = 0; i<4; i++)
           {
            int nrow = x+r[i];
            int ncol = y+c[i];
            if(isSafe(nrow,ncol,matrix.size(),matrix[0].size(),visited)){
                visited[nrow][ncol] = 1;
                q.push({{nrow,ncol},dis+1});
            }
           }
        }
        
        return distance;
    }

};

int main(){
    vector<vector<int>> matrix = {{0,0,0},
    {0,1,0},{1,0,1}};

    NearestCell* near = new NearestCell();

    for(vector<int> r: near->nearestCell_1(matrix)){

        for(auto c: r){
            cout<<c<<" ";
        }
        cout<<endl;
    }
}