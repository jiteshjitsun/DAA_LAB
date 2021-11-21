#include<bits/stdc++.h>

using namespace std;

struct task {
    int id;
    int dead;
    int profit;
};

bool comp(struct task t1,task t2) {
    if(t1.profit>t2.profit)
        return true;
}

void maxTask(int p[],int d[],int n) {
    struct task t[n];
    for(int i=0; i<n; i++) {
        t[i].dead = d[i],t[i].profit=p[i],t[i].id=i+1;
    }

    sort(t,t+n,comp);
    int res[n];
    bool slot[n];

    for(int i=0; i<n; i++) {
        slot[i] = false;
    }

    for(int i=0; i<n; i++) {
        for(int j=min(n,t[i].dead)-1; j>=0; j--) {
            if(slot[j]==false)
            {
                res[j] = i;
                slot[j] = true;

                break;
            }
        }
    }

    for(int i=0; i<n; i++) {
        if(slot[i])
            cout<<t[res[i]].id<<" ";
    }
}

int main() {
    int n; 
    cin>>n; 
    int p[n],d[n];
    for(int i=0; i<n; i++) 
        cin>>p[n];
    for(int i=0; i<n; i++) 
        cin>>d[n];
    
    maxTask(p,d,n);
}