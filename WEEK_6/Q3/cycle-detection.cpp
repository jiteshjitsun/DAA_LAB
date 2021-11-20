#include<bits/stdc++.h>
using namespace std;
vector<int> adj[10000];
int flag=0;
void dfs(int node,vector<int> &vis, vector<int> adj[]) {
    if(vis[node]==-1)
    {
        flag=1;
        return;
    }
       
    vis[node] = -1;
    for(auto it:adj[node]) {
        if(vis[it]!=1) {
            dfs(it,vis,adj);
        }
    }
    vis[node]=1;
}

int main() {
    int v,e;
    cin>>v>>e;
    // vector<int> adj[v];
    for(int i=0; i<e; i++) {
        int u,v; 
        cin>>u>>v;
        adj[u].push_back(v);
    }

    vector<int> vis(v+1,0);
    for(int i=1; i<=v; i++) {
        if(!vis[i])
            dfs(i,vis,adj);
        if(flag==1)
            break;  
    }

    if(flag) 
        cout<<"Cyle detected"<<endl;
    else    
        cout<<"cyle not exist"<<endl;
}

