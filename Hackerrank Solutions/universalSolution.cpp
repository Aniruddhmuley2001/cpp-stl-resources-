#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        string s1 , c;
        ll r = 0 , s = 0 , p1 = 0;
        cin >> s1;
        for(ll i=0 ; i<s1.size() ; i++)
        {
            if(s1[i] == 'S') s++;
            else if(s1[i] == 'R') r++;
            else p1++;
        }
        ll ans = max(r , max(s , p1));
        if(ans == r) c = "P";
        else if(ans == s) c = "R";
        else c = "S";
        for(ll i=0 ; i<s1.size() ; i++)
        {
            cout << c;
        }
        cout << "\n";
    }
}
