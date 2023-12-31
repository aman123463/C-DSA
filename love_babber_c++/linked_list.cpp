#include<iostream>
#include<map>
using namespace std;
//basically this program is creat for insert a element a a specific position 
//or bassically we lern creat a singly link list 
class node 
{
    public:
    int data ;
    node* next;
    //implement data in newly created node :
    node(int data)
    {
        this->data=data;
        this->next=NULL;
    }
    ~node()
    {
      int value=this->data;
      if(this->next!=NULL)  
      {
        delete next;
        this->next=NULL;
      }
      cout<<" memory is free for node with data :"<<value <<endl;
    }

};
//implimentation of a singly linked list->insert node at beggining  
void insertAt_head(node* &head,int data )
{
  node* temp=new node(data);
  temp->next=head;
  head=temp;
}
void insertAt_tail(node* &tail,int data )
{
node* temp=new node(data);
tail->next=temp;
tail=temp;
}
void insertAt_possition(node* &head,node* &tail,int data ,int possition)
{
    if(possition==1)
    {
        insertAt_head(head,data);
        return ;
    }
    node* temp=head;
    int count=1;
    while(count<possition-1)
    {
        temp=temp->next;
        count++;
    }
    //iinsert node at tail posstion 
    if(temp->next==NULL)
    {
        insertAt_tail(tail,data);
        return;
    }
    node* newnode=new node(data);
    newnode->next=temp->next;
    temp->next=newnode;
}
void deleteNode(int possition,node* &head)
{
    //deleting  start node
    if(possition==1)
    {
      node* temp=head;
      head=head->next;
      temp->next=NULL;
      delete temp;
      //free(temp);
    }
    else
    {
      node* current=head;
      node* prev=NULL;
      int count=1;
      if(count<possition)
      {
        prev=current;
        current=current->next;
        count++;
      }

      prev->next=current->next;
      current->next=NULL;
      delete current;
    }
}
void print(node*head)
{
   node* temp=head;
   while(temp!=0)
   {
   cout<<temp->data<<" ";
   temp=temp->next;
   }
   cout<<endl;
   
}
bool floydDetectionLoop(node* &head)//cheak loop is present or not in the list 
{
  if(head==NULL)
  {
    return 0;
  }
  node* slow=head;
  node* fast=head;
  while(slow!=NULL&&fast!=NULL)
  {
    fast=fast->next;
    if(fast!=NULL)
    {
      fast=fast->next;
    }
    slow=slow->next;
    if(fast==slow)
    {
      cout<<"loop is present at "<<fast->data<<endl;
      return 1;
    }
  }
  return 0;
}
cheak_loopUsing_map(node* &head)//using loop is there loop is present or not 
{
  if(head==NULL)
  {
    return 0;
  }
  map<node*,bool>detector;
  node* temp=head;
  while(temp!=NULL)
  {
    if(detector[temp]==true)
    {
      cout<<" cycle is present at :"<<temp->data<<endl;
      return 1;
    }
    detector[temp]=true;
    temp=temp->next;
  }
  return 0;
}
int main()
{
    node* node1=new node(12);
    node* head=node1;
    node* tail=node1;
     insertAt_tail(tail,13);
    insertAt_tail(tail,14);
    insertAt_tail(tail,15);
    insertAt_tail(tail,16);
    print(head);
    insertAt_possition(head,tail,11,1);
    print(head);
    cout<<" head data ->"<<head->data<<endl;
    cout<<" tail data->"<<tail->data<<endl;
    print(head);
    deleteNode(1,head);
    print(head);
    cout<<" head data ->"<<head->data<<endl;
    tail->next=head->next->next;
   /*cheak loop is present or not in the list */
   if(cheak_loopUsing_map(head))
   {
    cout<<" loop is present :"<<endl;
   }
   else
   {
   cout<<" loop is not :"<<endl;
   }
    if(floydDetectionLoop(head))//using map
    {
      cout<<" loop is present in the Linked list:"<<endl;
    }
    else
    {
      cout<<" loop is not present in the list:"<<endl;
    }
    
    return 0;
}