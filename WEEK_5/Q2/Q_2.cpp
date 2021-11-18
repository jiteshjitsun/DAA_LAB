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
        vector<int> arr;
        for(int i=0; i<n; i++) {
            int a;
            cin>>a;
            arr.push_back(a);
        }
        int k;
        cin>>k;
        sort(arr.begin(),arr.end());
        
        int a=0;
        for(int i=0; i<n-1; i++) {
            for(int j=i+1; j<n; j++) {
                if(arr[i]+arr[j] == k) {
                    cout<<arr[i]<<" "<<arr[j]<<" ";
                    a+=1;
                }
            }
        }
        if(a==0) cout<<"Not present";
        cout<<endl;
    }
}