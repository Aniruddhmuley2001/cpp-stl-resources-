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

ll power(ll a , ll b)
{
    ll result = 1;
    while(b > 0)
    {
        if(b%2 == 1) result = result * a;
        a = a * a;
        b = b/2;
    }
    return result;
}

int main()
{
    IOS
    ll a , b , count=0;
    cin >> a >> b;
    while(a <= b)
    {
        a = 3*a;
        b = 2*b;
        count++;
    }
    cout << count << "\n";
}