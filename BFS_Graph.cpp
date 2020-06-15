#include <bits/stdc++.h>

using namespace std;

//Time Complexity - O(n^2)

void BFS(int G[][7],int start,int n){
    int i = start;
    queue<int> q;
    int visited[7] = {0};
    cout<<i<<" ";
    visited[i] = 1;
    q.push(i);
    while(!q.empty()){
        int u = q.front(); 
        q.pop();
        for(int j=1;j<n;j++){
            if(visited[j]==0 && G[u][j]==1){
                cout<<j<<" ";
                q.push(j);
                visited[j] = 1;
            }
        }
    }
    
}

int main()
{
    int G[7][7] = {{0,0,0,0,0,0,0},
                   {0,0,1,1,0,0,0},
                   {0,1,0,0,1,0,0},
                   {0,1,0,0,1,0,0},
                   {0,0,1,1,0,1,1},
                   {0,0,0,0,1,0,0},
                   {0,0,0,0,1,0,0}};
    cout<<"The Breadth First Search in Graph is as follows : ";
    BFS(G,4,7);
    return 0;
}
