#include<bits/stdc++.h>
using namespace std;
#define ll long long int


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a , b;
        cin>>a>>b;
        if(2*a > 2*b && a <= 2*b)
        {
            cout<<4*b*b<<endl;
        }
        else
        {
            if(2*b < a)
            {
                cout<<a*a<<endl;
            }
            else
            {
                cout<<4*a*a<<endl;
            }
            

        }
        
    }
}