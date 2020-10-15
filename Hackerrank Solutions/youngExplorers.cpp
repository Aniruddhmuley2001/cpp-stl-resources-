#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    int t;
    cin >> t;
    while( t-- )
    {
        int n , count = 0, s = 0;
        multiset<int> m;
        vector<int> v;
        cin >> n;
        v.resize(n);
        for(int i=0 ; i<n ; i++)
        {
            cin >> v[i];
        }
        sort(v.begin() , v.end());
        for(int i=0 ; i<n ; i++)
        {
            m.insert(v[i]);
            if(m.size() >= v[i]) 
            {
                count++;
                m.clear();
            }
        }
        cout << count << endl;
    }
}