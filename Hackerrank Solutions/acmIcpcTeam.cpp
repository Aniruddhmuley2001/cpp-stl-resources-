#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    char str[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>str[i][j];
        }
    }
    int team = 0;
    int count = 0;
    int count_temp = 0;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n-1;j++)
        {
            count_temp = 0;
            for(int k=0;k<m;k++)
            {
                if(str[i][k] == '1' || str[j][k] == '1')
                {
                    count_temp = count_temp + 1;
                }
            }
            if(count_temp > count)
            {
                team = 1;
                count = count_temp;
            }
            else if(count_temp == count)
            {
                    team = team + 1;
            }
        }
    }
    cout<<count<<endl<<team;
    return 0;
}