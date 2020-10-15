#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int c[n];
    for(int i=0;i<n;i++)
    {
        cin>>c[i];
    }
    int energy = 100;
    for(int i=0+k; ;)
    {
        if(i%n == 0)
        {
           if(c[i%n] ==0)
           {
               energy = energy - 1;
           }
           else
           {
               energy = energy - 3;
           }
           break;
        }
        else 
        {
            if(c[i%n] == 0)
            {
                energy = energy - 1;
            }
            else
            {
                energy = energy - 3;
            }
        }
        i = i + k;
    }
    cout<<energy;
    return 0;
}