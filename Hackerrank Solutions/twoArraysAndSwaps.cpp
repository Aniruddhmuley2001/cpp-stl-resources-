#include <bits/stdc++.h>
using namespace std;
#define ll long long int


int main()
{
    int t ;
    cin>>t;
    while(t--)
    {
        vector<int> v1 , v2;
        int n , k , sum = 0;
        cin >> n >> k;
        v1.resize(n) , v2.resize(n);
        for(int i=0; i<n ; i++)
        {
            cin>>v1[i];
        }
        for(int i=0; i<n ; i++)
        {
            cin>>v2[i];
        }
        sort(v1.begin() , v1.end());
        sort(v2.begin() , v2.end());
        for(int i=0 ; i<n ; i++)
        {
            if(v1[i] < v2[n-1-i] && k>0)
            {
                k--;
                v1[i] = v2[n-1-i];
                sum = sum + v1[i];
            }
            else
            {
                sum = sum + v1[i];
            }
        }
        cout<<sum<<endl;
    }
}