#include<bits/stdc++.h>

using namespace std;

struct node {
    int u;
    int v;
    int wt;
    node(int first,int second, int weight) {
        u = first;
        v = second;
        wt = weight;
    }
};

int main() {
    int n,m; 
    cin>>n>>m;
    vector<node> edges;
    for(int i=0;i<m; i++) {
        int u,v,wt;
        cin>>u>>v>>wt;
        edges.push_back(node(u,v,wt));
    }

    

    int src;
    cin>>src;
    int inf = 1000000;

    
    
    vector<int> dis(n+1,inf);
    dis[src] = 0; 

    for(int i=1; i<=n-1; i++) {
        for(auto it:edges) { 
            if(dis[it.u] + it.wt < dis[it.v]) {
                dis[it.v] = dis[it.u] + it.wt;
            }   
        }
    }

    int flag = 0;
    for(auto it:edges) {
        if(dis[it.u] + it.wt < dis[it.v]) {
            cout<<"Negative cycle";
            flag = 1;
            break;
        }
    }

    if(!flag) {
        for(int i=0; i<n; i++) {
            cout<<i<<" "<<dis[i]<<endl;
        }
    }
}