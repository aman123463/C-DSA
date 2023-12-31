#include<iostream>
using namespace std;
# define n 5
int stack[n];
int top=-1;
void push()
{
    int x;
    cout<<" enter how data you went to insert in stack:"<<endl;
    cin>>x;
    if(top==n-1)
    {
        cout<<"overflow condition :"<<endl;
    }
    else
    {
       top++;
       stack[top]=x;
    }
} 
void pop()
{
    int item;
    if(top==-1)
    {
        cout<<" underflow condition :"<<endl;
    }
    else 
    {
    item=stack[top];
    cout<<" the popped item from stack is ->>"<<item<<endl;
    top--;
    }
}
void peek()
{
    if(top==-1)
    {
        cout<<" underflow condition :"<<endl;
    }
    else
    {
        cout<<" from peek operation -> the top element is :-"<<stack[top]<<endl;
    }
}
void display()
{
    int i=top;
    while(i!=-1)
    {
        cout<<stack[i]<<"  ";
        i--;
    }
}
void isfull_isempty()
{
   if(top==n-1)
   {
    cout<<" yes stack is full -> you can't insert any data :"<<endl;
   } 
   else
   {
    cout<<" stack is empty :";
   }
}

int main()
{
   for(int i=0;i<n;i++)
   {
    push();
   }
   display();
   pop();
   peek();
   pop();
   peek();
   isfull_isempty();
   push();
   display();
   return 0;
}