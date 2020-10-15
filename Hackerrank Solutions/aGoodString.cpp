#include <bits/stdc++.h>
using namespace std;
#define ll long long
string s;

ll power(ll a , ll b)
{
    ll result = 1;
    while(b > 0)
    {
        if(b%2 == 1) result = result * a;
        a = a * a;
        b = b/2;
    }
    return result;
}


ll haha(ll l , ll r , char c)
{
    if(l==r)
    {
        return s[l]==c?0:1;
    }
    else
    {
        ll mid = (l+r)/2 , c1 = 0 , c2 = 0;
        for(ll i=l ; i<=mid ; i++)
        {
            if(s[i]!=c) c1++;
        }
        for(ll i=mid+1 ; i<=r ; i++)
        {
            if(s[i]!=c) c2++;
        }
        c++;
        return min(c1+haha(mid+1,r,c),c2+haha(l,mid,c));
    }
    
}

int main()
{
    ll t=1;
    cin >> t;
    while(t--)
    {
        ll n ;
        cin >> n >> s;
        cout << haha(0,n-1,'a') << "\n";
    }
}