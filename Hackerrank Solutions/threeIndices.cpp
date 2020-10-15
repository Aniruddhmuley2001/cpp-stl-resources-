#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        ll n , flag1 = 0 , flag2 = 0 , arr[3] = {0};
        cin >> n;
        vector < ll > v(n);
        for(ll i=0;i<n;i++) cin>>v[i];
        for(ll i=0 ; i<n ; i++)
        {
            if(flag1 == 1 && flag2 == 1)
            {
                cout <<"YES\n" << arr[1]+1 << " " << arr[0]+1 << " " << arr[2]+1 << "\n";
                break;
            }
            flag1 = 0 , flag2 = 0;
            arr[0] = i;
            for(ll j=0 ; j<i ; j++)
            {
                if(v[j] < v[i])
                {
                    arr[1] = j;
                    flag1 = 1;
                    break;
                }
            }
            for(ll j=i+1 ; j<n ; j++)
            {
                if(v[j] < v[i])
                {
                    arr[2] = j;
                    flag2 = 1;
                    break;
                }
            }
        }
        if(flag1 == 0 || flag2 == 0) cout << "NO\n";

    }
    return 0;
}