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