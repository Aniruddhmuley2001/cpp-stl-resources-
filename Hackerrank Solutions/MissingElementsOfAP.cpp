#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    
    ll t;
    cin >> t;
    while(t--)
    {
        ll n , diff = 0;
        cin >> n;
        vector<ll> v(n);
        for(ll i=0 ; i<n ; i++)
        {
            cin >> v[i];
            if(i>0) diff = max(diff , v[i]-v[i-1]);
        }
        for(ll i=1 ; i<n ; i++)
        {
            if(v[i]-v[i-1] == diff)
            {
                cout <<v[i-1]+(diff/2) << "\n";
                break;
            }
        }
    }
}