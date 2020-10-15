#include <bits/stdc++.h>
//#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
#define zad tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
using namespace std;
#define in1(x) scanf("%lld",&x)
#define in2(x,y) scanf("%lld%lld",&x,&y)
#define in3(x,y,z) scanf("%lld%lld%lld",&x,&y,&z)
#define out(x) printf("%lld",x)
#define outspace(x) printf("%lld ",x)
#define outln(x) printf("%lld\n",x)
#define ll long long
#define ld long double
#define pb push_back
#define p push
#define mkp make_pair
#define ff first
#define PLL pair<ll,ll>
#define ss second
#define precision(x,d) cout<<fixed<<setprecision(d)<<x
#define minQueue priority_queue<ll,vector<ll>,greater<ll> >
#define maxQueue priority_queue<ll,vector<ll>,less<ll> >
#define all(x) x.begin(),x.end()
#define F(i,a,b) for(ll i=a;i<b;i++)
#define RF(i,a,b) for(ll i=a;i>b;i--)
#define mset(a,b) memset((a),(b),sizeof((a)))
#define IOS ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);srand(time(NULL));
#define MOD 1000000007
#define RMOD 998244353
#define INF 10000000000000000
#define MINF LONG_LONG_MIN
#define MAXF LONG_LONG_MAX
const ll N=200007;
#define OuterLoop ll t;scanf("%lld",&t);while(t--)

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        vector<ll> v(n);
        for(ll i=0 ; i<n ; i++)
        {
            cin>>v[i];
        }
        ll answer = 0 , max = v[0];
        for(ll i=0 ; i<n-1 ; i++)
        {
            if(v[i] > 0)
            {
                if(v[i+1] > 0)
                {
                    if(v[i+1] > max)  max = v[i+1];
                }
                if(v[i+1] < 0)
                {
                    answer = answer + max;
                    max = v[i+1];
                }
            }
            else
            {
               if(v[i+1] < 0)
               {
                   if(v[i+1] > max) max = v[i+1];
               }
               if(v[i+1] > 0)
               {
                   answer = answer + max;
                   max = v[i+1];
               }
            }
        }
        answer = answer + max;
        cout<<answer<<endl;
    }
}



// error vale sare code..oberthinked and over logical
/*
#include <bits/stdc++.h>
//#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
#define zad tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
using namespace std;
#define in1(x) scanf("%lld",&x)
#define in2(x,y) scanf("%lld%lld",&x,&y)
#define in3(x,y,z) scanf("%lld%lld%lld",&x,&y,&z)
#define out(x) printf("%lld",x)
#define outspace(x) printf("%lld ",x)
#define outln(x) printf("%lld\n",x)
#define ll long long
#define ld long double
#define pb push_back
#define p push
#define mkp make_pair
#define ff first
#define PLL pair<ll,ll>
#define ss second
#define precision(x,d) cout<<fixed<<setprecision(d)<<x
#define minQueue priority_queue<ll,vector<ll>,greater<ll> >
#define maxQueue priority_queue<ll,vector<ll>,less<ll> >
#define all(x) x.begin(),x.end()
#define F(i,a,b) for(ll i=a;i<b;i++)
#define RF(i,a,b) for(ll i=a;i>b;i--)
#define mset(a,b) memset((a),(b),sizeof((a)))
#define IOS ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);srand(time(NULL));
#define MOD 1000000007
#define RMOD 998244353
#define INF 10000000000000000
#define MINF LONG_LONG_MIN
#define MAXF LONG_LONG_MAX
const ll N=200007;
#define OuterLoop ll t;scanf("%lld",&t);while(t--)

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        vector<ll> v;
        v.resize(n);
        for(ll i=0 ; i<n ; i++)
        {
            cin>>v[i];
        }
        ll sum = -1000000000 , flag = 0;
        for(ll i=0 , j=0 ; i<n ; i = j+1)
        {
            if(v[i] > 0)flag = 0;
            else flag = -1;
            ll x = v[i];
            j = i + 1;
            while( j < n)
            {
                if(flag == 0)
                {
                    if(v[j] < 0)   x = x + v[j];
                    else break;
                }
                else
                {
                    if(v[j] > 0)   x = x + v[j];
                    else break;
                }
                sum = max(sum , x);
                j++;
            }
            sum = max(sum , x);
        }
        cout<<sum<<endl;
    }
}




//second code..
#include <bits/stdc++.h>
//#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
#define zad tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
using namespace std;
#define in1(x) scanf("%lld",&x)
#define in2(x,y) scanf("%lld%lld",&x,&y)
#define in3(x,y,z) scanf("%lld%lld%lld",&x,&y,&z)
#define out(x) printf("%lld",x)
#define outspace(x) printf("%lld ",x)
#define outln(x) printf("%lld\n",x)
#define ll long long
#define ld long double
#define pb push_back
#define p push
#define mkp make_pair
#define ff first
#define PLL pair<ll,ll>
#define ss second
#define precision(x,d) cout<<fixed<<setprecision(d)<<x
#define minQueue priority_queue<ll,vector<ll>,greater<ll> >
#define maxQueue priority_queue<ll,vector<ll>,less<ll> >
#define all(x) x.begin(),x.end()
#define F(i,a,b) for(ll i=a;i<b;i++)
#define RF(i,a,b) for(ll i=a;i>b;i--)
#define mset(a,b) memset((a),(b),sizeof((a)))
#define IOS ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);srand(time(NULL));
#define MOD 1000000007
#define RMOD 998244353
#define INF 10000000000000000
#define MINF LONG_LONG_MIN
#define MAXF LONG_LONG_MAX
const ll N=200007;
#define OuterLoop ll t;scanf("%lld",&t);while(t--)

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        vector<ll> v;
        v.resize(n);
        for(ll i=0 ; i<n ; i++)
        {
            cin>>v[i];
        }
        ll answer = 0;
        ll sum = -10000000000000 , flag = 0;
        for(ll i=0 , j=0 ; i<n ; i = j)
        {
            if(v[i] > 0)flag = 0;
            else flag = -1;
            ll x = v[i];
            j = i+1;
            while( j < n)
            {
                if(flag == 0)
                {
                    if(v[j] < 0)
                    {
                        x = x + v[j];
                        j++;
                    }
                    else break;
                }
                else
                {
                    if(v[j] > 0) {
                        x = x + v[j];
                        j++;
                    }
                    else break;
                }
                sum = max(sum , x);
            }
            //cout<<j<<" ";
            sum = max(sum , x);
            answer = answer + sum;
        }
        cout<<answer<<endl;
        //cout<<endl;
    }
}
#include <bits/stdc++.h>
//#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
#define zad tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
using namespace std;
#define in1(x) scanf("%lld",&x)
#define in2(x,y) scanf("%lld%lld",&x,&y)
#define in3(x,y,z) scanf("%lld%lld%lld",&x,&y,&z)
#define out(x) printf("%lld",x)
#define outspace(x) printf("%lld ",x)
#define outln(x) printf("%lld\n",x)
#define ll long long
#define ld long double
#define pb push_back
#define p push
#define mkp make_pair
#define ff first
#define PLL pair<ll,ll>
#define ss second
#define precision(x,d) cout<<fixed<<setprecision(d)<<x
#define minQueue priority_queue<ll,vector<ll>,greater<ll> >
#define maxQueue priority_queue<ll,vector<ll>,less<ll> >
#define all(x) x.begin(),x.end()
#define F(i,a,b) for(ll i=a;i<b;i++)
#define RF(i,a,b) for(ll i=a;i>b;i--)
#define mset(a,b) memset((a),(b),sizeof((a)))
#define IOS ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);srand(time(NULL));
#define MOD 1000000007
#define RMOD 998244353
#define INF 10000000000000000
#define MINF LONG_LONG_MIN
#define MAXF LONG_LONG_MAX
const ll N=200007;
#define OuterLoop ll t;scanf("%lld",&t);while(t--)

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        vector<ll> v;
        v.resize(n);
        for(ll i=0 ; i<n ; i++)
        {
            cin>>v[i];
        }
        ll answer = 0;
        ll sum = -10000000000000 , flag = 0;
        for(ll i=0 , j=0 ; i<n ; i = j)
        {
            if(v[i] > 0)flag = 0;
            else flag = -1;
            ll x;
            j = i+1;
            while( j < n)
            {
                if(flag == 0)
                {
                    if(v[j] < 0)
                    {
                        x = v[i] + v[j];
                        j++;
                    }
                    else break;
                }
                else
                {
                    if(v[j] > 0) {
                        x = v[i] + v[j];
                        j++;
                    }
                    else break;
                }
                sum = max(sum , x);
                //cout<<sum<<" "<<j<<endl;
            }
            //cout<<j<<" ";
            sum = max(sum , x);
            cout<<sum<<" ";
            answer = answer + sum;
            //cout<<answer<<" ";
        }
        //cout<<answer<<endl;
        //cout<<endl;
    }
}

*/


