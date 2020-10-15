#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ll a , b , count=0;
    cin >> a >> b;
    while(a <= b)
    {
        a = 3*a;
        b = 2*b;
        count++;
    }
    cout << count << "\n";
}