#include<bits/stdc++.h>

using namespace std;

int main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        char str[n];
        for(int i=0; i<n; i++) {
            cin>>str[i];
        }
        map<char,int> mp;
        for(int i=0; i<n; i++) {
            mp[str[i]]++;
        }

        map<char,int>::iterator it;
        int a = 0;
        for(it=mp.begin(); it!=mp.end(); it++) {
            if(a < it->second)
                a = it->second;
        }

        
        for(it=mp.begin(); it!=mp.end(); it++) {
            if(a==it->second && a!=1) {
                cout<<it->first<<" "<<it->second<<endl;
            }
            else if(a==1) {
                cout<<"No duplicate present"<<endl;
                break;
            }
        }
    }
}