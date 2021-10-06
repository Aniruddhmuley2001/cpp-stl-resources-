#include <iostream>
#include <vector>
#include <queue>
#include <stack>

using namespace std;

bool IsCycle(int V, vector<int> adj[])
{
    vector<int> indegree(V, 0);
    queue<int> q;

    for (int i = 0; i < V; i++)
    {
        for (auto it : adj[i])
        {
            indegree[it]++;
        }
    }

    for (int i = 0; i < V; i++)
    {
        if (indegree[i] == 0)
        {
            q.push(i);
        }
    }

    int count = 0;

    while (!q.empty())
    {
        int node = q.front();
        q.pop();
        count++;
        for (auto it : adj[node])
        {
            indegree[it]--;
            if (indegree[it] == 0)
            {
                q.push(it);
            }
        }
    }
    if (count == V)
        return false;
    else
        return true;
}

int main()
{
    vector<int> adj[6];

    adj[2].push_back(3);

    adj[3].push_back(1);

    adj[4].push_back(0);
    adj[4].push_back(1);

    adj[5].push_back(0);
    adj[5].push_back(2);

    vector<int> adj2[4];
    adj2[0].push_back(1);
    adj2[1].push_back(2);
    adj2[2].push_back(3);
    adj2[3].push_back(1);

    cout << IsCycle(6, adj) << "\n";
    cout << IsCycle(4, adj2) << "\n";

    return 0;
}