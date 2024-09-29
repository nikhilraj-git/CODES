#include<iostream>
using namespace std;

void push(int val){
  if(top>=n-1)
  cout<<"Stack Overflow"<<endl;
  else{
    top++;
    stack[top]=val;
  }

}
void pop(){
  if(top<=-1)
  cout<<"Stack Underflow"<<endl;
  else{
    cout<<"The popped element is "<<stack[top];
    top--;
  }
}
void display(){
  if(top>=0){
    cout<<"Stacks elements are :";
    for(int i=top;i>=0;i--)
    {
      cout<<stack[i]<<" "; 
    }
    cout<<endl;
  }
}

int main(){
  int ch, val;

  cout<<"1) Push in stack"<<endl;
  cout<<"2) Pop from stack"<<endl;
  cout<<"3) Display stack"<<endl;
  cout<<"4) Exit"<<endl;
  do{
    cout<<"Enter choice "<<endl;
    cin>>ch;
    switch(ch){
      case 1:{
        cout<<"Enter value top to be pushed :"<<endl;
        cin>>val;
        push(val);
        break;
      }
      case 2:{
        pop();
        break;


      }
      case 3{
        display();
        break;

      }
      case 4{
        break;
      }
    }
  }
  int stack[10];
  int top=-1;
  push(val)
  

}