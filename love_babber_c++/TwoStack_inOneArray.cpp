#include<iostream>
using namespace std;
class twostack
{
    private:
    int *arr;int top1;int top2;int size;
    public:
    twostack(int size)//constructor called ->basically it will  give to the size of array 
    {
        this->size=size;
        this->top1=-1;
        this->top2=size;
        arr=new int[size];
    }
    void push1(int value )
    {
        if(top2-top1>1)
        {
            arr[++top1]=value;
        }
        else
        {
           cout<<" overflow condition :"<<endl;
        }
    }
    void push2(int value )
{
    if(top2-top1>1)
    {
        arr[++top2]=value;
    }
    else
    {
       cout<<" overflow condition :"<<endl;
    }
}
void pop1()
{
    if(top1==-1)
    {
        cout<<" stack is underflow :"<<endl;
    }
    else
    {
      int ch=arr[top1];
      cout<<" the popped element is :"<<ch<<endl;
      top1--;
    }
}
void pop2()
{
    if(top2==size)
    {
        cout<<" stack is underflow :"<<endl;
    }
    else
    {
      int ch=arr[top2];
      cout<<" the popped element is :"<<ch<<endl;
      top2--;
    }
}
void peek1()
{
    if(top1==-1)
    {
        cout<<" stack is underflow :"<<endl;
    }
    else
    {
        cout<<" the top most element of the stack1 is ->"<<arr[top1]<<endl;
    }
}
void peek2()
{
    if(top2==size)
    {
        cout<<" stack is underflow :"<<endl;
    }
    else
    {
        cout<<" the top most element of the stack1 is ->"<<arr[top2];
    }
}
void empty()
{
    if(top2-top1>1)
    {
        cout<<endl<<" stack is empty :"<<endl;
    }
    else
    {
        cout<<endl<<" stack is full: "<<endl;
    }
}
};
int main()
{
   twostack s(8);
   
   s.push1(7);
   s.push1(10);
   s.push2(19);
   s.push1(33);
   s.push2(90);
   s.pop2();
   s.peek2();
   s.empty();

   return 0;
}