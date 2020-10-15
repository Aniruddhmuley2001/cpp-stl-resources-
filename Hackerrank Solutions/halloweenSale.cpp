#include <bits/stdc++.h>

using namespace std;
int main()
{
    int p,d,m,s;
    cin>>p>>d>>m>>s;
    int prize = p;
    int count = 0;
    int temp = 0;
    int prize1 = 0;
    if(s >= prize)
    {
        count = count + 1;
        s = s - prize;
        prize1 = prize - d;
        temp = 1;
    }
    if(temp == 1)
    {
        temp = prize1;
            if(prize1 <= s)
            {
                for(int i=prize1;i>m; )
                {
                    if(i <= s)
                    {
                        count = count + 1;
                        s = s - i;
                        i = i - d;
                        temp = i;
                    }
                }
            }
            if(s >= m && temp <= m)
            {
                count = count + s/m;
            }
    }
    cout<<count;
    return 0;
}