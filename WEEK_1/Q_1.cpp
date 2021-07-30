#include<iostream>
#include<vector>

using namespace std;

int main()
{
    int t, n, k, ele,c=1;
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
        for(int l=0; l<v1.size(); l++)
        {
            if(v1[l]==k)
            {
                c=0;
                cout << k << " present at position "<< l;  
            }
        }
        if(c!=0)
        {
            cout << "Not present";
        }
    }

}