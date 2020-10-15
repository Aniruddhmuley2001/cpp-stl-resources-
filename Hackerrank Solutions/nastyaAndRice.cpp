#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    int t , a , b , c , d , n;
    cin>>t;
    while(t--)
    {
        cin>>n>>b>>a>>d>>c;
        int flag = 0;
        for(int i = b - a ; i <= a + b ; i++)
        {
            if(i*n >= d - c && i*n <= d + c)
            {
                flag = 1;
                break;
            }
        }
        if(flag)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
        
    }
}