#include <bits/stdc++.h>

using namespace std;
int main()
{
    int b,n,m;
    cin>>b>>n>>m;
    int k[n],u[m];
    for(int i=0;i<n;i++)
    {
        cin>>k[i];
    }
    for(int i=0;i<m;i++)
    {
        cin>>u[i];
    }
    int temp;
    int count = 0;
    int max_amount = 0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            temp = k[i] + u[j];
            if(temp > max_amount)
            {
                if(temp <= b)
                {
                    max_amount = temp;
                    count = count + 1;   //also helps this how many ways she can bye the pair of two things
                }
            }
        }
    }
    if(max_amount == 0)
    {
        cout<<"-1";
    }
    else
    {
        cout<<max_amount;
    }

    return 0;
}