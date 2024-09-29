#include<iostream>
#include<cmath>

#define ll long long
#define pii pair<int, int>
#define pll pair<long long, long long>
#define vi vector<int>
#define vll vector<long long>
#define mii map<int, int>
#define mci map<char, int>
#define si set<int>
#define sc set<char>
#define ff first
#define ss second
 
#define pub push_back
#define pop pop_back
 
#define mod 1000000007
#define pi 3.1415926535897932384626433832795
using namespace std;
int main()
{

    int num;
  cin>>num;
  int temp = num;
  int n=0;
  int ans=0;
  while(temp!=0)
  {
    int t=temp%10;
    if(t>=5 &&temp/10 !=0)
    {
        ans+=(9-t)*pow(10,n);
        n++;
    }
    else 
    {
      ans+=(t)*pow(10,n);
        n++;
    }
    temp=temp/10;
  }
  cout<<ans<<endl;
  
}