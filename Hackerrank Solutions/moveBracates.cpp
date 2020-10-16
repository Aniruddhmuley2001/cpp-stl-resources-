#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
  ll t;
  cin >> t;
  while(t--)
  {
    ll n = 0 , count = 0 , ss = 0;
    string s;
    cin >> n >> s;
    for(ll i=0 ; i<s.size() ; i++)
    {
      if(s[i] == '(') ss++;
      if(s[i] == ')')
      {
        if(ss > 0) ss--;
        else count++;
      }
    }
    cout << count << "\n";
  }
}
