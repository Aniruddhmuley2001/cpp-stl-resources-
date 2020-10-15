#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        vector<ll> v(n);
        for(ll i=0 ; i<n ; i++)
        {
            cin>>v[i];
        }
        ll answer = 0 , max = v[0];
        for(ll i=0 ; i<n-1 ; i++)
        {
            if(v[i] > 0)
            {
                if(v[i+1] > 0)
                {
                    if(v[i+1] > max)  max = v[i+1];
                }
                if(v[i+1] < 0)
                {
                    answer = answer + max;
                    max = v[i+1];
                }
            }
            else
            {
               if(v[i+1] < 0)
               {
                   if(v[i+1] > max) max = v[i+1];
               }
               if(v[i+1] > 0)
               {
                   answer = answer + max;
                   max = v[i+1];
               }
            }
        }
        answer = answer + max;
        cout<<answer<<endl;
    }
}

