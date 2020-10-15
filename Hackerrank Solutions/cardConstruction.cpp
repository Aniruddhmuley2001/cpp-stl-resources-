#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double

int main()
{
    ll t ;
    cin>>t;
    while(t--)
    {
        ll n , height = 0;;
        cin>>n;
        while(n > 1)
        {
            for(int i=1 ; ; i++)
            {
                ll sum = (i - 1) + (i*2);
                if(sum <= n)
                {
                    height = height + 1;
                    n = n - sum;
                }
                else
                {
                    break;
                }
                
            }
        }
        cout<<height<<endl;
    }

    return 0;
}