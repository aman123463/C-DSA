#include<iostream>
using namespace std;
//doubly linked list insertion code 
class node
{
    public:
    int data;
    node* prev;
    node* next;
    node(int data)
    {
        this->data=data;
        this->prev=NULL;
        this->next=NULL;
    }
    ~node()
    {
        int value=this->data;
        if(next!=NULL)
        {
            delete next;
            next=NULL;
        }
     cout<<" memory free for node with data :"<<value <<endl;    
    }
};
//traversing a linked list 
void print(node* &head)
{
    node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"  ";
        temp=temp->next;
    }
    cout<<endl;
}
void insertAt_head(node* &head,int data)
{
   node* temp=new node(data);
   temp->next=head;
   head->prev=temp;
   head=temp;
   //5  4  3  2  1
   /*if you  went to insert 6 then 
   6  5  4  3  2  1 
   */
}
void insertAt_tail(node* &tail,int data )
{
    node* temp=new node(data);
    tail->next=temp;
    temp->prev=tail;
    tail=temp;
}
void insertAt_possition(node* &head,node* &tail,int possition, int data)
{
   if(possition==1) 
   {
    insertAt_head(head,data);
    return;
   }
   node* temp=head;
   int cnt=1;
   while(cnt<possition-1)
   {
    temp=temp->next;
    cnt++;
   }
   //insertAt_last 
   if(temp->next==NULL)
   {
    insertAt_tail(tail,data);
    return ;
   }
   node* newnode=new node(data);
  newnode->next=temp->next;
  temp->next->prev=newnode;
  temp->next=newnode;
  newnode->prev=temp;
}
void deleteAt_possition(node* &head,node* &tail,int possition)
{
    if(possition==1)
    {
        node* temp=head;
        temp->next->prev=NULL;
        head=temp->next;
        temp->next=NULL;
        delete temp;
    }
    else
    {
      node* current=head;
      node* previous=NULL;
      int cnt=1;
      while(cnt<possition)
      {
        previous=current;
        current=current->next;
        cnt++;
      }
      current->prev=NULL;
      previous->next=current->next;
      //current->next->prev=previous;
      current->next=NULL;
      delete current;
    }

}
//gives length of a linked list 
void getlength(node* &head)
{
    node* temp=head;
    int count=0;
    while(temp!=NULL)
    {
        count++;
        temp=temp->next;
    }
    cout<<" the lenght of the singly linked  list is :->"<<count<<endl;
}

int main()
{
    node* node1=new node(10);
    node* head=node1;
    node* tail=node1;
    
    insertAt_head(head,11);
    insertAt_head(head,12);
    insertAt_head(head,13);
    getlength(head);
     print(head);
     cout<<" head data is :"<<head->data<<endl;
     insertAt_tail(tail,45);
     insertAt_tail(tail,47);
     print(head);
    getlength(head);
    insertAt_possition(head,tail,1,100);
    insertAt_possition(head,tail,8,110);
    print(head);
    getlength(head);
    cout<<" head is ->"<<head->data<<endl;
    cout<<" tail is ->"<<tail->data<<endl;
    deleteAt_possition(head,tail,8);
    cout<<" head is ->"<<head->data<<endl;
    cout<<" tail is ->"<<tail->data<<endl;
    print(head);
    getlength(head);
     return 0;
}
