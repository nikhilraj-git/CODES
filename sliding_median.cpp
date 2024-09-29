#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
template <typename T>
using ordered_set = tree<T,null_type,less<T>,rb_tree_tag, tree_order_statistics_node_update>;
#define ln '\n'
typedef long long ll;
int main()
{
  int n,k;
  cin>>n>>k;
  vector<int>  a(n);
  for(auto  &i:a) cin>>i;
  ordered_set<pair<int,int>> win;
  for(int i=0;i<k;i++)
  {
    win.insert({a[i],i});
  }
  cout<<win.find_by_order((k-1)/2)->first<<" ";

  for(int i=1;i<n-k+1;i++)
  {
    win.erase({a[i-1],i-1});
    win.insert({a[i+k-1],i+k-1});
    cout<<win.find_by_order((k-1)/2)->first<<" ";
  }
  return 0;


}