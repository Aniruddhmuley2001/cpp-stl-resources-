#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ff first
#define ss second


bool sortByVal(const pair<ll, ll> &a, 
               const pair<ll, ll> &b) 
{ 
    return (a.second > b.second); 
} 

int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        ll n , x;
        cin >> n;
        map< ll , ll > m;
        for(ll i=0 ; i<n ; i++)
        {
            cin >> x;
            m[x]++;
        }
        vector< pair<ll,ll> > v;
        for(auto it = m.begin() ; it != m.end() ; it++) v.push_back({it->first,it->second});
        sort(v.begin() , v.end() , sortByVal);
        if(v[0].ss < v.size()) cout << v[0].ss << "\n";
        else if(v[0].ss > v.size()) cout << v.size() << "\n";
        else cout << v.size()-1 << "\n";
    }
}