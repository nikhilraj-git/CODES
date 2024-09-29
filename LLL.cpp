#include<bits/stdc++.h>
using namespace std;
class Node{
  public:
  int data;
  Node*next;
  Node(){
    this->data=data;
    this->next=NULL;
  }
  Node(int x){
    this->data=x;
    this->next=NULL;
  }
};

void insertAtbeg(Node **head,int val){
  Node*temp = new Node(val);
  temp->next=*head;
  *head=temp;
  // return head;
}
void printList(Node*head){
  Node*temp=head;
  while(temp!=NULL){
    cout<<temp->data<<"->";
    temp=temp->next;
  }
  
}
int main(){
  Node*head=new Node(2);
  insertAtbeg(&head,3);
  insertAtbeg(&head,1);
  insertAtbeg(&head4);
  printList(head);

}