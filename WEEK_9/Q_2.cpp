#include<bits/stdc++.h>
using namespace std;

struct Item {
    int value;
    int weight;
    int pos;
};

bool comp(Item a, Item b) {
    double r1 = (double)a.value / (double)a.weight;
    double r2 = (double)b.value / (double)b.weight;
    return r1 > r2;
}

void maxVal(int val[],int wt[], int n,int w) {
    struct Item m[n];
    for(int i=0; i<n; i++) {
        m[i].value = val[i], m[i].weight = wt[i],m[i].pos=i+1;
    }
    

    sort(m,m+n,comp);

    int curwt = 0;
    double profit = 0.0;
    for(int i=0; i<n; i++)
    {
        if(curwt+m[i].weight <= w) {
            curwt+=m[i].weight;
            profit+=m[i].value;
        }
        else {
            int remain = w-curwt;
            profit += (m[i].value/(double)m[i].weight) * (double)remain;
        }
    }

    cout<<"Maximum value- "<<profit<<endl;
     for(int i=0; i<n; i++) {
        cout<<m[i].pos<<"-"<<m[i].weight<<endl;
    }
    
}

int main() {
    int n;
    cin>>n; 
    int val[n],wt[n];
    for(int i=0; i<n; i++) {
        cin>>wt[i];
    }
    for(int i=0; i<n; i++) 
        cin>>val[i];
    int w;
    cin>>w;
    maxVal(val,wt,n,w);
}