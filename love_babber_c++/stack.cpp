#include<iostream>
using namespace std;
class stack 
{
    private :
    int *arr;
    int top;
    int size;
    public:
    stack(int n)
    {
      this->size=n;
      this->top=-1;
      arr=new int[size];
    }
    void push(int element )
    {
        if(size-top>1)
        {
            arr[++top]=element;
        }
        else
        {
            cout<<" stack is full :"<<endl;
        }
    }
    void pop()
    {
        if(top>=0&&top<size)
        {
            top--;
        }
        else{
        cout<<"stack is empty :"<<endl;
        }
    }
    void peek()
    {
        if(top>=0&&top<size)
        {
            cout<<"the top most element is :"<<arr[top]<<endl;
        }
        else
        {
            cout<<" stack is empty :"<<endl;
        }
    }
    void empty()
    {
        if(top==-1)
        {
            cout<<" stack is empty :"<<endl;
        }
        else{
            cout<<" stack is full";
        }
    }
};
int main()
{
 stack s(6);
 s.push(871);
 s.push(872);
 s.push(873);
 s.push(874);
 s.push(875);
 s.push(876);
 s.push(879);
 s.push(820);
 s.pop();
s.empty();
 s.peek();
}















/*#include<iostream>
using namespace std;
class stack{
    private :
    int *arr;
    int top;
    int size;
    //behavior 
    public :
    stack(int size)
    {
        this->size=size;
        top=-1;
        arr=new int[size];
    }
    void push(int element)
    {
       if(size-top>1)
       {
        cout<<" stack is full"<<endl;
       } 
       else{
        top++;
        arr[top]=element;
       }
    }
    void pop()
    {
        if(top==-1)
        {
            cout<<" stack is already empty :"<<endl;
        }
        else
        {
            top--;
        }
    }
    void peek()
    {
        if(top>=0&&top<size)
        {
           cout<<" the peak element is :"<<arr[top]<<endl;
        }
        else
        {
            cout<<" stack is empty :"<<endl;
        }
    }
    void empty()
    {
        if(top==-1)
        {
           cout<<" stack is empty :"<<endl;
        }
        else{
            cout<<" stack is full: "<<endl;
        }
    }

};
int main()
{
    stack s(5);
    s.push(9);
    s.push(16);
    s.peek();
}

//stack using STL
/*#include<iostream>
#include<stack>
using namespace std;
int main()
{
    stack<int>s;
    s.push(8);
    s.push(9);
    s.push(10);
    s.push(11);
    s.pop();
    cout<<" the peak element in the stack is :"<<s.top();
   if(s.empty())
   {
    cout<<" the stack is empty ";
   }
   else
   {
    cout<<" stack is not empty :"<<endl;
   }

}
*/