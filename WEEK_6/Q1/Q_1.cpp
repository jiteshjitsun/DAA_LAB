#include<bits/stdc++.h>

using namespace std;

bool dfs(vector<int>& vis, int src, int des, vector<int> adj1[]) {
    vis[src] = 1;
    
        for(auto it:adj1[src]) {
            if(it==des)return true;
            if(!vis[it]){
               if(dfs(vis,it,des,adj1))
               {
                   return true;
               }
            }
    }
    return false;
}

int main() {
    int v;
    cin>>v;
    int adj[v][v];
    for(int i=0; i<v; i++) {
        for(int j=0; j<v; j++) {
            cin>>adj[i][j];
        }
    }

    vector<int> adj1[v+1];
    for(int i=0; i<v+1; i++) {
        for(int j=0; j<v+1; j++) {
            if(adj[i][j] == 1)
            {
                adj1[i+1].push_back(j+1);
            }
        }
    }
    int src,des;
    cin>>src>>des;

    vector<int> vis(v+1,0);
    cout<<dfs(vis,src,des,adj1);
}