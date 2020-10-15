#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ff first
#define ss second

 
int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        ll n , k , x;
        cin >> n >> k;
        map< ll , ll > m;
        for(ll i=0;i<n;i++)
        {
            cin >> x;
            ll id = k - (x%k);
            if(id != k) m[id]++;
        }
        if(m.empty()) cout << "0\n";
        else
        {
            ll maximum1 = 0 , p =0,ans=0;
            for(auto i = m.begin() ; i != m.end() ; i++)
            {
                p = maximum1;
                maximum1 = max(maximum1 , i.ff + (i.ss-1)*k);
            }
            cout << (maximum1 + 1) << endl;           
        }
    }
}