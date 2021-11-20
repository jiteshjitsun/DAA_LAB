#include<bits/stdc++.h>
using namespace std;

int main() { 
    int v,e;
    cin>>v>>e;
    vector<pair<int,int>> adj[v+1];
    for(int i=0; i<e; i++) {
        int u,v,wt;
        cin>>u>>v>>wt;
        adj[u].push_back({v,wt});
        adj[v].push_back({u,wt});
    }

    int src;
    cin>>src;
    priority_queue< pair<int,int>, vector<pair<int,int>>, greater<pair<int,int> > > pq;
    vector<int> dis(v+1,INT_MAX);

    dis[src] = 0;
    pq.push({0,src});

    while(!pq.empty()) {
        int dist = pq.top().first;
        int prev = pq.top().second;
        pq.pop();

        vector<pair<int,int>>::iterator it;
        for(auto it:adj[prev]) {
            int next = it.first;
            int nextDist = it.second;
            if(dis[next] > dis[prev]+nextDist){
                cout<<"hello";
                dis[next] = dis[prev] + nextDist;
                pq.push({dis[next], next});
            }
        }
    }

    cout<<"The distance from the source - "<<src<<" is ";
    for(int i=1; i<=v; i++) {
        cout<<dis[i]<<" ";
    }
}