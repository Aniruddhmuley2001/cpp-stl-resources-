#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define OuterLoop ll t;scanf("%lld",&t);while(t--)

int main()
{
    string s;
    cin >> s;
    ll x = s[0];
    if(x >= 97 && x <= 122) s[0] = x -32;
    cout << s << "\n";
}