#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int n , j = 0 , i = 0;
    cin >> n;
    vector< ll > v(n);
    vector< ll > ans(n , -10);
    for(int i=0 ; i<n ; i++) cin >> v[i];
    for(int i=1 ; i<n ; i++) if(v[i-1] != v[i]) ans[i] = v[i-1];
    for(int i=0 ; i<n ; i++)
    {
        if(ans[i] == -10)
        {
            while(find(v.begin() , v.begin()+i+1 , j) != v.end()) j++;
            ans[i] = j;
        }
    }
    for(int i=0 ; i<n ; i++) cout << ans[i] << " ";
}