#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n , c=0 , c2=0 ;
        cin >> n;
        vector<int> v1(n) , v2(n) , v3(n);
        for(int i=0 ; i<n ; i++) cin >> v1[i];
        for(int i=0 ; i<n ; i++){
             cin >> v2[i];
             if(v2[i] == 1) c = 1;
             if(v2[i] == 0) c2 = 1;
        }
        v3 = v1;
        sort(v3.begin() , v3.end());
        if(v3 == v1 || (c2&&c)) cout << "Yes\n";
        else cout<<"NO\n"; 
    }
}