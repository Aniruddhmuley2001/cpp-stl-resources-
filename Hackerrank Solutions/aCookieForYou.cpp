#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
  ll t;
  cin >> t;
  while(t--)
  {
    ll a , b , n , m , flag = 0;
    cin >> a >> b >> n >> m;
    if(a+b < n+m) flag = 1;
    else
    {
      if(a > b)
      {
        if(b >= m) flag = 0;
        else flag = 1;
      }
      else
      {
        if(a >= m) flag = 0;
        else flag = 1;
      }
    }
    if(flag) cout << "No\n";
    else cout << "Yes\n";
  }
}
