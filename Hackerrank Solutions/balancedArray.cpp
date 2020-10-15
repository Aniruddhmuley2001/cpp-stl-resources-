#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int a;
        cin >> a;
        if(a % 4 != 0) cout << "NO\n";
        else
        {
            vector<int> v;
            v.resize(a);
            int b = 2;
            for(int i=0 ; i<a/2 ; i++)
            {
                v[i] = b;
                if(i < a/4) v[i + a/2] = b-1;
                else v[i + a/2] = b + 1;
                b = b + 2;
            }
            cout << "YES\n";
            for(int i=0 ; i<a ; i++) cout<< v[i] << " ";
            cout << endl;
        }
        
    }
}