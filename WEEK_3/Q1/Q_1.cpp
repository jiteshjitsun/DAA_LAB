#include<bits/stdc++.h>
using namespace std;

int main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int t,n, comp = 0, shift = 0;
    cin >> t;
    while(t--)
    {
        cin >> n;
        int arr[n];
        for(int i=0; i<n; i++)
        {
            cin >> arr[i];
        }

        // insertion sort
        for(int i=1; i<n; i++)
        {
            int temp = arr[i];
            int j= i-1;
            while(j>-1 && temp<arr[j])
            {
                arr[j+1] = arr[j];
                j-=1;
                comp +=1;
            }
            arr[j+1] = temp;
            shift +=1;
        }
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
        cout << "comparisons" << " = " << comp << endl;
        cout << "shifts" << " = " << shift + comp << endl;
        comp = 0;
        shift = 0;
    }
}
