#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double

int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        if(n%2) cout << (n-1)/2 << "\n";
        else cout << (n-2)/2 << "\n";
    }
}