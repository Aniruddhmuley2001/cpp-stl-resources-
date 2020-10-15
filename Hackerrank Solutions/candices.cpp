#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
       ll num;
       cin >> num; 
       // if num is odd then the x is odd and if num is even then the x is even.
       ll n = 3;
       while( num % n != 0)
       {
           n = 2*n + 1;
       }
       cout << num/n << endl;
    }
}