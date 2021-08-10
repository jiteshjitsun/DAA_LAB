#include<bits/stdc++.h>
using namespace std;

int main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int t,n;
    cin >> t;
    while(t--)
    {
        cin >> n;
        int arr[n];
        for(int i=0; i<n; i++)
        {
            cin >> arr[i];
        }
        
        int shift = 0, comp = 0;
        // selection sort
        int min,temp,a;
        for(int i=0; i<n; i++)
        {
            min = arr[i];
            a = i;
            for(int j=i+1; j<n+1; j++)
            {
                if(min > arr[j])
                {
                    min = arr[j];
                    a = j;
                   
                }
                comp+=1;
            }
            temp = arr[i];
            arr[i] = arr[a];
            arr[a] = temp;
            shift+=1;
        }
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
        cout << "comparisons" << " = " << comp-shift << endl;
        cout << "shifts" << " = " << shift-1 << endl;
    }
}
