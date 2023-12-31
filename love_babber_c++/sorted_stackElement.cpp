#include<iostream>
#include<stack>
using namespace std;
void insertAtRightPossition(stack<int>&s,int element)
{
    if(s.empty()||s.top()<element)
    {
        s.push(element);
        return ;
    }
    int num=s.top();
    s.pop();
    insertAtRightPossition(s,element);
    s.push(num);
    return ;

}
void sortStack(stack<int>&s)
{
    //base case 
    if(s.empty())
    {
        return ;
    }
    int element=s.top();
    s.pop();
    sortStack(s);
    insertAtRightPossition(s,element);
}
int main()
{
    stack<int>s;
    s.push(76);
    s.push(45);
    s.push(36);
    s.push(13);
    s.push(11);
    s.push(67);
    sortStack(s);
    cout<<" the top most element of the stack is :"<<s.top()<<endl;
    s.pop();
    cout<<" after popout statement the top most element of the stack is :"<<s.top()<<endl;
    return 0;

}