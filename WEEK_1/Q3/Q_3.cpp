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
        
        // jump search 
        int h=2,l=0;
        while(h<n)
        {
            if(k>=v1[l] && k<v1[h])
            {
                break;
            }
            l = h;
            h*=2;
        }
        for(int p=l; p<h; p++)
        {
            if(v1[p]==k)
            {
                cout << "Present "<< p <<endl;
                c = 1;
                break;
            }
        }

        if(c==0)
            cout << "Not present "<< n << endl;
        c = 0;
        v1.clear();

    }
    return 0;
}