// if you are impliment the stack using link list then you have to
// remember this think always push and pop operation take
// take time complexity is o(1);

// also in such case we will always push and pop the element
// from the front or you can say in term of link list
// link list head or in term of stack is-> top
// means link list)
/*
main difference bitween
stack using link list vs simple link list
in link list ->the prev node contain the address the address of next node
but in case of stack
stack->the new node contain the address of previous node;
*/
#include <iostream>
using namespace std;
struct node
{
    //representation of node only
    int data;
    struct node *next;
};
struct node *top = 0;

void push()
{
    int x;
    cout<<" how data you went to inserty in stack;"<<endl;
    cin>>x;
    struct node* newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data=x;
    newnode->next=top;
    top=newnode;
}
void display()
{
  struct node* temp;
  temp=top;  
  if(top==0)
  {
    cout<<"stack is empty:"<<endl;
  }
  else 
  {
    while(temp!=0)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
  }
}
void peek()
{
  if(top==0)
  {
    cout<<" stack is empty:"<<endl;
  }  
  else
  {
   cout<<"from the peek operation -> the top element is -:"<<top->data<<endl;
  }
}
void pop()
{
    struct node* temp;
    temp=top;
    if(top==0)
  {
    cout<<" stack is empty:"<<endl;
  }  
  else
  {
    cout<<" the poped element is ->"<<top->data<<endl;
    top=top->next;
    free(temp);
  }

}

int main()
{
    push();
    push();
    push();
    push();
    push();
    display();
    peek();
    pop();
    pop();
    display();
}
