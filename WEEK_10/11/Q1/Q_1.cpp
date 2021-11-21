#include<bits/stdc++.h>
using namespace std;

struct meeting {
    int start;
    int end;
    int pos;
};

bool comp(struct meeting m1,meeting m2) {
    if(m1.end < m2.end) return true;
    else if(m1.end > m2.end) return false;
    else if(m1.pos < m2.pos) return true;
    return false;
}

void maxMeeting(int s[],int e[],int n) {
    struct meeting m[n];
    for(int i=0; i<n; i++) {
        m[i].start = s[i],m[i].end = e[i], m[i].pos = i+1;
    }

    sort(m,m+n,comp);
    vector<int> v;
    int limit = m[0].end;
    v.push_back(m[0].pos);
    for(int i=1; i<n; i++) {
        if(m[i].start >= limit) {
            limit = m[i].end;
            v.push_back(m[i].pos);
        }

    }

    for(int i=0; i<v.size(); i++) {
        cout<<v[i]<<" ";
    }
}

int main() {
    int n;
    cin>>n;
    int s[n],e[n];
    for(int i=0; i<n; i++) {
        cin>>s[i];
    }
    for(int i=0; i<n; i++) {
        cin>>e[i];
    }

    maxMeeting(s,e,n);
}