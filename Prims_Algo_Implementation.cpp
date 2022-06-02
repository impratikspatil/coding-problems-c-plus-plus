
#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;
vector<pair<int, int>> adj[N];
int parent[N];
int key[N];
bool mst[N];

int main()
{
    int n, m;
    cout<<"Enter no. of vertices: ";
    cin >> n ;
    cout<<"Enter no. of edges: ";
    cin >> m ;

    int v1, v2, wt;
    for (int i = 0; i < m; i++)
    {
        cout<<"Enter two vertices and their weight: ";
        cin >> v1 >> v2 >> wt;
        adj[v1].push_back({v2, wt});
        adj[v2].push_back({v1, wt});
    }
  
    for (int i = 0; i < N; i++)
    {
        parent[i] = -1;
        key[i] = INT_MAX;
        mst[i] = false;
    }

    key[0] = 0;
    parent[0] = -1;

    for (int count = 0; count < n - 1; count++) // n- 1 because there are n -1 edges in the MST
    {
        int mini = INT_MAX, u; // u for storing index which will be included in our MST
        for (int v = 0; v < N; v++)
        {
            if (adj[v].size() == 0) continue;
            if (mst[v] == false && key[v] < mini)
            {
                mini = key[v];
                u = v;
            }
        }
        mst[u] = true;
        for (auto it : adj[u])
        {
            int v = it.first;
            int weight = it.second;
            if (mst[v] == false && weight < key[v])
            {
                key[v] = weight;
                parent[v] = u;
            }
        }
    }

    cout<<"edges which contain minimum spanning tree:-\n";
    for (int i = 1; i < N; i++)
    {
        if(parent[i]==-1)
        {
            continue;
        }
        cout << parent[i] << " - " << i << "\n";
    }
}