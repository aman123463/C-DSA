#include<iostream>
using namespace std;
class node{
    public :
    int data;
    node* prev;
    node* next;
    node(int value )
    {
      this->data=value;
      this->prev=NULL;
      this->next=NULL;
    }
};
void print(node* head)
{
    node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }cout<<endl;
}
int  getlength(node* head)
{
    node* temp=head;
    int length=0;
    while(temp!=NULL)
    {
        length+=1;
        temp=temp->next;
    }
    return length;
}
void insertAtHead(node* &head,int data)
{
    node* temp=new node(data);
    temp->next=head;
    head->prev=temp;
    head=temp;
}
void insertAtTail(node* &tail,int data)
{
    node* temp=new node(data);
    tail->next=temp;
    temp->prev=tail;
    tail=temp;
}
void insertAtPossition(node* &head,node* &tail,int data,int pos)
{
    //insert at first posssition 
    if(pos==1)
    {
        insertAtHead(head,data);
        return ;
    }
    node* temp=head;
    int count=1;
    while(count<pos-1)
    {
        temp=temp->next;
        count+=1;
    }
    //insert at last possition 
    if(temp->next==NULL)
    {
        insertAtTail(tail,data);
        return ;
    }
    node* newnode=new node(data);
    newnode->next=temp->next;
    temp->next->prev=newnode;
    temp->next=newnode;
    newnode->prev=temp;
}
int main()
{
 node* node1=new node(456);
 node* head=node1;
 node* tail=node1;
 insertAtHead(head,457);
 insertAtHead(head,458);
 insertAtHead(head,459);
 insertAtTail(tail,456);
 insertAtTail(tail,457);
 insertAtTail(tail,458);
 insertAtTail(tail,459);
 print(head);
 insertAtPossition(head,tail,data,3);


 return 0;
}