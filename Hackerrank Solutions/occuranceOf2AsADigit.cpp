#include<bits/stdc++.h>
using namespace std;
#define ll long long int

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

int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        ll n , count = 0 , x = -1, y = 0 , p1 = 0, p2 = 0;
        cin >> n;
        for(ll i=1 ; x != 0 ; i++)
        {
            p1 = power(10,i);
            p2 = p1/10;
            x = n/p1;
            //cout << count << "...";
            count = count + x*p2;
            y = n%p1;
            //cout << x << " " << p1 << " "<< y << " " << p2 << "\n";
            if(y >= 2*p2 && y >= 3*p2) count = count + p2;
            else if(y >= 2*p2 && y < 3*p2) count = count + (y - 2*p2 + 1);
            //cout << count << "..";
        }
        cout << count << "\n";
    }
}