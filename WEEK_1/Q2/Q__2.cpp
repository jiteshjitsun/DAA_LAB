#include<bits/stdc++.h>

using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);   //input to be taken from input.txt
    freopen("output.txt", "w", stdout); //output to be printed in output.txt
    int t, n, k, ele,c=0;
    vector<int> v1;
    cin >> t;
    for(int i=0; i<t; i++)
    {
        cin >> n;
        for(int j=0; j<n; j++)
        {
            cin >> ele;
            v1.push_back(ele);
        }
        cin >> k;
        
        int l=0,h=n-1,mid;
        while(l<=h)
        {
            mid = (l+h)/2;
            if(k==v1[mid])
            {
                cout << "present "<< mid << endl;
                c = 1;
                break;
            }
            else if(k>v1[mid])
            {
                l = mid+1;
            }
            else 
            {
                h = mid-1;
            }
        }
        if(c==0)
            cout << "Not present "<< n << endl;
        c = 0;
        v1.clear();

    }
    return 0;
}