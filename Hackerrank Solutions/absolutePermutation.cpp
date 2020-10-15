#include <bits/stdc++.h>
using namespace std;
#define ll long long int

ll n , q1 , q2 , k1 , k2 , r1 , r2;
bool visited[1001][1001];
ll dx[]={-1,-1,-1,0,0,1,1,1};
ll dy[]={-1,0,1,-1,1,-1,0,1};

void BFS()
{
    queue<pair<ll,ll>> q;
    q.push({k1,k2});
    visited[k1][k2]=1;

    while(!q.empty())
    {
        pair<ll,ll> p=q.front();
        q.pop();
        ll x=p.first;
        ll y=p.second;

        for(ll i=0 ; i<8 ; i++)
        {
            ll t1=x+dx[i];
            ll t2=y+dy[i];
            if(visited[t1][t2]==0 && abs(t1-q1)!=abs(t2-q2) && t1!=q1 && t2!=q2 && t1<=n && t1>0 && t2<=n && t2>0)
            {
                visited[t1][t2]=1;
                q.push({t1,t2});
                if(t1==r1 && t2==r2)
                {
                    cout << "YES\n";
                    exit(0);
                }
            }
        }
    }
}

int main()
{
    cin>>n>>q1>>q2>>k1>>k2>>r1>>r2;
    BFS();
    cout << "NO\n";
}