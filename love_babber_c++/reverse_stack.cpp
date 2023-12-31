#include<iostream>
#include<stack>
using namespace std;
void reverse_stackOriginal(stack<int>&s1,stack<int>&s2)
{
    if(s2.empty())
    {
        return ;
    }
    int element=s2.top();
    s2.pop();
     reverse_stackOriginal(s1,s2);
     s1.push(element);
     cout<<s1.top()<<" ";
    
}
void reverse_stack(stack<int>&s1,stack<int>&s2)
{
    while(!s1.empty())
    {
        s2.push(s1.top());
        s1.pop();
    }
    return ;
}
int main()
{
    stack<int>s1;
    s1.push(1);
    s1.push(4);
    s1.push(6);
    s1.push(2);
    s1.push(0);
    stack<int>s2;
    reverse_stack(s1,s2);
    reverse_stackOriginal(s1,s2);
    cout<<" the top element of the stack is :"<<s1.top()<<endl;

    return 0;
}