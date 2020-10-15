#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        vector<int> v;
        int n , count[2] = {0};
        cin>>n;
        v.resize(n);
        for(int i=0 ; i<n ; i++)
        {
            cin>>v[i];
            count[v[i] % 2] = count[v[i] % 2] + 1;
        }
        sort(v.begin() , v.end());
        if(count[0] % 2 == 0 && count[1] % 2 == 0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            for(int i=0 ; i<n-1 ; i++)
            {
                if((v[i+1] - v[i]) == 1)
                {
                    count[0] = count[0] + 1;
                    count[1] = count[1] + 1;
                    i++;
                }
            }
            if(count[0] % 2 == 0 && count[1] % 2 == 0)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
            

        }
         
    }
}