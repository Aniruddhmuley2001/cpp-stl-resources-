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

ll OddFactor(ll n)  
{ 
    ll c = 0;
    while(n%2 == 0){
        n = n/2;
        c++;
    }
    if(c==1)
    {
        for(ll i=3 ; i<=sqrt(n) ; i+=2)
        {
            if(n%i == 0)
            {
                n = n/i;
                break;
            }
        }
    }
    return n;
}  
  

int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        ll n , answer = 0;
        cin >> n;
        while(n!=1)
        {
            if(n%2)
            {
                n = 1;
                answer++;
            }
            else
            {
                ll x = OddFactor(n);
                if(x==1)
                {
                    n = n-1;
                    answer++;
                }
                else
                {
                    n = n/x;
                    answer++;
                }  
            }
        }
        if(answer%2) cout << "Ashishgup\n";
        else cout << "FastestFinger\n";
        
    }
}