#include<vector>
#include<iostream>
using namespace std;
void makeSieve(int n)
{
  vector<bool> isPrime(n+1,true);
  isPrime[0]=isPrime[1]=false;
  for(int i=2;i<=n;i++)
  {
    if(isPrime[i]==true)
    {
      for(int j=i*i;j<=n;j+=i)
      {
        isPrime[j]=false;
      }
    }
  }
  for(int i=0;i<=n;i++)
  {
    cout<<i<<":"<<isPrime[i]<<endl;
  }

}
int main(){
  int n;
  cin>>n;
  makeSieve(n);
  return 0;
}