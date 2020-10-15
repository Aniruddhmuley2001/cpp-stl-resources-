#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n;
    cin>>n;
    int other[n];
    for(int i=0;i<n;i++)
    {
        cin>>other[i];
    }
    int m;
    cin>>m;
    int allice[m];
    for(int i=0;i<m;i++)
    {
        cin>>allice[i];
    }
    int other_rank[n];
    for(int i=0;i<n;i++)
    {
        if(i == 0)
        {
            other_rank[i] = 1;
        }
        else
        {
            if(other[i] == other[i-1])
            {
                other_rank[i] = other_rank[i-1];
            }
            else
            {
                other_rank[i] = other_rank[i-1] + 1;
            }
        }
    }
    int alice_rank[m];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(allice[i] > other[j])
            {
                if(j == 0)
                {
                    alice_rank[i] = 1;
                }
                else
                {
                    alice_rank[i] = other_rank[j];
                }
                break;
            }
            else if(allice[i] == other[j])
            {
                alice_rank[i] = other_rank[j];
                break;
            }
            else
            {
                if(j == n-1)
                {
                    alice_rank[i] = other_rank[n-1] + 1;
                    break;
                }
            }
        }
    }
    for(int i=0;i<m;i++)
    {
        cout<<alice_rank[i]<<endl;
    }
    return 0;
}
