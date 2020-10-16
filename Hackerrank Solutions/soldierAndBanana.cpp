#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    
    ll k , n , w;
    cin >> k >> n >> w;
    ll x = k*w*(w+1)/2;
    if(x > n) cout << (x-n) << "\n";
    else cout << "0";

    return 0;
}