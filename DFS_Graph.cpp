#include <bits/stdc++.h>

using namespace std;

//Time Complexity - O(n)

void DFS(int G[][7],int start,int n){
    
    static int visited[7]={0};
    
    if(visited[start]==0){
        cout<<start<<" ";
        visited[start] = 1;
        for(int i=1;i<n;i++){
            if(visited[i]==0 && G[start][i]==1)
                DFS(G,i,7);
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
    cout<<"The Depth First Search in Graph is as follows : ";
    DFS(G,4,7);
    return 0;
}
