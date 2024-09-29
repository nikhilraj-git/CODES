#include<iostream>
#include<stdlib.h>
using namespace std;
struct Node{
  int data;
  struct Node*next;
};
int sum(struct Node*head){
  struct Node*temp=head;
  int sum=0;
  while(temp!=NULL){
    sum+=temp->data;
    temp=temp->next;
  }
  return sum;
}
void insert(struct Node**head,int val)
{
  struct Node*newNode=(struct Node*)malloc(sizeof(struct Node));
  newNode->data=val;
  newNode->next=*head;
  *head=newNode;
}
void printList(struct Node*head){
  struct Node*temp=head;
  while(temp!=NULL){
    cout<<temp->data<<" ";
    temp=temp->next;
  }
  cout<<endl;
  
}
struct Node*merge(struct Node**head1,struct Node**head2){
    struct Node*temp=*head1;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=*head2;
    return *head1;
}
int main(){
  struct Node*head=NULL;
  insert(&head,2);
  insert(&head,4);
  insert(&head,3);
  insert(&head,5);
  printList(head);
  struct Node*head_new=NULL;
  insert(&head_new,5);
  insert(&head_new,4);
  insert(&head_new,3);
  insert(&head_new,2);
  insert(&head_new,1);
  printList(head_new);
  struct Node*ans=merge(&head,&head_new);
  printList(head);
  printList(ans);
//   int add=sum(ans);
  
//   int ans=sum(head);
//   cout<<ans<<endl;

}