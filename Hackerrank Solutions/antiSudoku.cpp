#include <bits/stdc++.h>
#include<string>
//#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
#define ll long long int

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s[10];
        for(int i=0;i<9;i++)
        {
            cin>>s[i];
        }
        int i = 0 , k = 0 ,j = 0;
        while(k < 3)
        {
            i = k;
            while( i <= k+6)
            {
                int x = (int)(s[i][j]) - 48;
               // cout<<x<<" ";
                x = (x + 4)%9;
                if(x == 0)
                {
                    x = 9;
                }
                //cout<<x<<" "<<i<<" "<<j<<" ";
                s[i][j] = (char)(x + 48 );
                //cout<<s[i][j]<<" ";
                i = i + 3;
                j = j + 1;
                //cout<<endl;
            }
            k = k + 1;
        }
        for(int i=0; i<9; i ++)
        {
            cout<<s[i]<<endl;
        }
    }
    return 0;
}
