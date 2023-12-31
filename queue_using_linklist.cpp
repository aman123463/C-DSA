#include<iostream>
using namespace std;
struct node
{
    int data;
    struct node* next;
};
struct node* front=0;
struct node* rear=0;
void enqueue(int x)
{
    struct node* newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=x;
    newnode->next=0;
    if(front==0&&rear==0)
    {
        front=rear=newnode;
    }
    else
    {
        rear->next=newnode;
        rear=newnode;
    }
}
void display()
{
  if(front==0&&rear==0)
  {
    cout<<" queue is empty:"<<endl;
  }
  else
  {
    struct node* temp;
    temp=front;
    cout<<" by display:->";
    while(temp!=rear->next)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
  }
}
void dequeue()
{
  if(front==0&&rear==0)
  {
    cout<<" queue is empty:"<<endl;
  }    
  else
  {
    struct node* temp;
    temp=front;
    cout<<endl<<"by dequeue operation ->"<<front->data<<endl;
    front++;
    free(temp);
  }
}
void peek()
{
 if(front==0&&rear==0)
 {
    cout<<" queue is empty:"<<endl;
 }  
 else
 {
   cout<<"by the peek operation :->" <<front->data<<endl;
 } 
}
int main()
{
    enqueue(12);
    enqueue(67);
    enqueue(98);
     display();
     dequeue();
     peek();
}
