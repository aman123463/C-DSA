#include<iostream>
using namespace std;
class node
{
    public:
    int data;
    node* next;
    public:
    node(int data)
    {
        this->data=data;
        this->next=NULL;
    }
};
void insertatbeggining(node* &head,int data)
{
    //new node creat
    node* temp=new node(data);
    temp->next=head;
    head=temp;
}
void insertattail(node* &tail,int data)
{
    node* temp=new node(data);
    tail->next=temp;
    tail=temp;
}
//how to travers a linked list ->or print the content of linked list
void insertatpossition(node* &tail,node* &head,int possition,int data )
{
    if(possition==1)
    {
        insertatbeggining(head,data);
        return ;
    }
    node* temp=head;
    int count=1;
    while(count<possition-1)
    {
     temp=temp->next;
     count++;   
    }
    //
   
   /* if(temp->next==NULL)
    {
        insertattail(tail,data);
        return ;
    }*/
    
    node* nodetoinsert=new node(data);
    nodetoinsert->next=temp->next;
    temp->next=nodetoinsert;
}
void print(node* &head)
{
    node* temp=head;
    while(temp!=0)
    {
        cout<<temp->data<<"  ";
        temp=temp->next;
    }
    cout<<endl;
    cout<<endl;
}
void deletionathead(node* &head)
{
    node* temp=head;
    head=head->next;
    free(temp);
}
void deletionatpossition(node* &head,node* tail,int possition)
{
 node* current=head;
 node* prev=NULL;
 int cnt=1;
 while(cnt<=possition)
 {
    prev=current;
    current=current->next;
    cnt++;
 }
 prev->next=current->next;
 
 current->next=NULL;
 free(current);
}

int main()
{
 node* node1=new node(0);
 //cout<<node1->data<<endl;
 //cout<<node1->next<<endl;
 node* head=node1;
 node* tail=node1;
 /*insertatbeggining(head,12);
 insertatbeggining(head,24);
 insertatbeggining(head,36);
 print(head);*/
 insertattail(tail,13);
 insertattail(tail,26);
 insertattail(tail,39);
 insertatpossition(tail,head,1,22);
 print(head);
 cout<<head->data<<endl;
 cout<<tail->data<<endl;
 deletionathead(head);
 print(head);
 deletionatpossition(head,tail,3);
 print(head);
 cout<<tail->data<<endl;


 
 
 return 0;
}