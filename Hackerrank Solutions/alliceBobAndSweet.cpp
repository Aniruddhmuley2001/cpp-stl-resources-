#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t , n;
    vector<int> v;
    cin>>t;
    while(t--)
    {
        cin>>n;
        v.resize(n);
        for(int i=0 ; i<n ;i++)
        {
            cin>>v[i];
        }
        int i = -1 , j = n , curr1 = 0 , curr2 = 0 , total1 = 0 , total2 = 0 , count = 0;
        while(i+1 != j)
        {
            int sum = 0;
            while(sum <= curr2 && i + 1 < j)
            {
                sum = sum + v[++i];
            }
            total1 = total1 + sum;
            if(sum) count = count + 1;
            curr1 = sum , sum = 0;
            while(sum <= curr1 && i < j - 1)
            {
                sum = sum + v[--j];
            }
            curr2 = sum;
            total2 = total2 + sum;
            if(sum) count = count + 1;
        }
        cout<<count<<" "<<total1<<" "<<total2<<endl;

    }
    return 0;
}