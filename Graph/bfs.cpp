#include<bits/stdc++.h>
using namespace std;

void bfs(int V,vector<int> adj[])
{
  int vis[V]={0};
  vis[0]=1;
  queue<int> q;
  q.push(0);
  vector<int> bfs;
  while(!q.empty())
  {
    int u=q.front();
    q.pop();
    bfs.push_back(u);
    for(auto  v:adj[u])
  {
    if(!vis[v])
    {
      vis[v]=1;
      q.push(v);
    }
  }
  }
  for(int i=0;i<bfs.size();i++)
  {
    cout<<bfs[i]<<" ";
  }

}
int main()
{
  int n;cin>>n;
  vector<int> adj[n+1];
  for(int i=0;i<n;i++)
  {
    int u,v;
    cin>>u>>v;

    adj[u].push_back(v);
    adj[v].push_back(u);

  }


  bfs(n,adj);
}