#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
void insertAt_tail(node *&head,node* &tail, int data)
{
    if (head == NULL)
    {
        node *temp = new node(data);
        head = temp;
        tail=temp;
    }
    else
    {
      node* newnode=new node(data);
      tail->next=newnode;
      tail=newnode;
    }
}
void print(node* &head)
{
    node *temp = head;
    int count=0;
    while (temp != NULL)
    {
        cout << temp->data << "   ";
        temp = temp->next;
        count++;
    }
    cout<<" number of count is :"<<count<<endl;
    cout<<endl;
}
node* reverse_LL2(node* &head)
{
    if(head==NULL||head->next==NULL)
   {
       return head;
   }
  node* prev =NULL;
  node* current=head;
  node* forward=NULL;

   while (current != NULL) {
     forward = current->next;
     current->next = prev;
     prev = current;
     current = forward;
   }
   head = prev;
   return head;
}
void reverse_LL(node* &head)
{
  node* ptr= reverse_LL2(head); 
 // print(ptr);
}

int main()
{
    node *head = NULL;
    node* tail=NULL;
    insertAt_tail(head,tail,13);
    insertAt_tail(head,tail,14);
    insertAt_tail(head,tail,15);
    insertAt_tail(head,tail,16);
    print(head);
    reverse_LL(head);
    print(head);

}
/*#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
void insertAt_tail(node *&head,node* &tail, int data)
{
    if (head == NULL)
    {
        node *temp = new node(data);
        head = temp;
        tail=temp;
    }
    else
    {
      node* newnode=new node(data);
      tail->next=newnode;
      tail=newnode;
    }
}
void print(node* &head)
{
    node *temp = head;
    int count=0;
    while (temp != NULL)
    {
        cout << temp->data << "   ";
        temp = temp->next;
        count++;
    }
    cout<<endl;
}
void  reverseLL(node* &head,node* &tail)
{

    if(head==NULL||head->next==NULL)
    {
        cout<<head->data<<" ";
        return ;
    }
    else
    {
        tail=head;
      node* prev=NULL;
      node* current=head;
      node* forward=NULL;
      while(current!=NULL)
      {
        forward=current->next;
        current->next=prev;
        prev=current;
        current=forward;
      }
      head=prev;
    }
}
int main()
{
    node *head = NULL;
    node* tail=NULL;
    insertAt_tail(head,tail,13);
    insertAt_tail(head,tail,14);
    insertAt_tail(head,tail,15);
    insertAt_tail(head,tail,16);
    cout<<" head data is "<<head->data<<endl;
    cout<<"tail data is ->"<<tail->data<<endl;
    print(head);
    reverseLL(head,tail);
    cout<<" head data is "<<head->data<<endl;
    cout<<"tail data is ->"<<tail->data<<endl;
    print(head);
    return 0;
}*/