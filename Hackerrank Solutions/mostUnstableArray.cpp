#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll a , b;
        cin>>a>>b;
        if(a == 1)
             cout<<"0"<<endl;
        else if(a == 2)
            cout<<b<<endl;
        else
            cout<<2*b<<endl;   
    }
}