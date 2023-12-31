#include<iostream>
#include<stack>
using namespace std;

void pushelement(stack<int>&s,int k)
{
  //base case
  {
    if(s.empty())
    {
        s.push(k);
        return ;
    }
    int element=s.top();
    s.pop();
    pushelement(s,k);
    s.push(element);
    return ;
  }
}
void pushAtBottom(stack<int>&s,int k)
{
     pushelement(s,k);
     cout<<" now new size of the stack is :"<<s.size()<<endl;
}
int main()
{
  stack<int>s;
  s.push(2);
  s.push(5);
  s.push(6);
  s.push(1);
  s.push(8);
  int k;
  cout<<" what element you went to insert at front :"<<endl;
  cin>>k;
  cout<<" the size of the stack is :"<<s.size()<<endl;
  pushAtBottom(s,k);
  return 0;
}