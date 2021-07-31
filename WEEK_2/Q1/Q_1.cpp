#include<bits/stdc++.h>

using namespace std;

int main() {
    freopen("input.txt", "r", stdin);   //input to be taken from input.txt
    freopen("output.txt", "w", stdout); //output to be printed in output.txt
    int t,n,ele,k;
    vector<int> v1;
    cin >> t;
    while(t--)
    {
        cin >> n;
        for(int i=0; i<n; i++)
        {
            cin >> ele;
            v1.push_back(ele);
        }
        cin >> k;
        int count =0;
        for(int i=0; i<n; i++)
        {
            if(k==v1[i])
            {
                count+=1;
            }
        }
        if(count>0)
            cout << k << "-" << count << endl;
        else
            cout << "Not present"<< endl;
        v1.clear();
    }
}