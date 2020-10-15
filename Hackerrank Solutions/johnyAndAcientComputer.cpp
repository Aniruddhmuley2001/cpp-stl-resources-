#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        ll a , b , count = 0;
        cin >> a >> b;
        if(a == b) cout <<"0" << endl;
        else
        {
            if(b > a)
            {
                ll temp = a;
                a = b;
                b = temp;
            }
            if(a%b == 0)
            {
                ll i = a/b;
                while(i%2 == 0)
                {
                    count = count + 1;
                    i = i/2;
                }
                if(i == 1)
                {
                    if(count%3 == 0) cout<<(count/3)<<endl;
                    else cout<<((count/3))+1<<endl;
                }
                else cout << "-1" << endl;   
            }
            else cout <<"-1" << endl;
        }
        
    }
}