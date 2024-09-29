#include<iostream>
#include<cmath>
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
    if(t>=5)
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
  cout<<ans<<" ";
}