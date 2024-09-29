#include<iostream>
using namespace std;


int main(){
    int M,N;
    cout<<"Enter number of rows and columns ";
        cin>>M>>N;
    cout<<"Enter the elements of 2D array";
    int array[M][N];
    for(int i=0;i<M;i++)
    {
        for(int j=0;j<N;j++)
        {
            cin>>array[i][j];
        }
    }
    int sum;
    for(int i=0;i<M;i++)
    {
        sum=0;
        for(int j=0;j<N;j++)
        {
            sum=sum+array[i][j];
        }
        cout<<sum<<" ";
  
    }
    cout<<endl;
    for(int i=0;i<N;i++)
    {
      for(int j=0;j<M;j++)
      {
        cout<<array[j][i]<<" ";
      }
      cout<<endl;
    }
    

       /*  Read input as specified in the question.
	* Print output as specified in the question.
	*/
  
}


