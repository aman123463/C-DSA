#include<iostream>
#include<stack>
using namespace std;
int main()
{
 stack<string>s;
 s.push("aman");
 s.push("krishna");
 s.push("mayank");
 s.push("papa");
 s.push("mummy");
 s.push("swati");
 cout<<" size of stack ->"<<s.size()<<endl;
 cout<<" top eleement is ->"<<s.top()<<endl;
 s.pop();
 cout<<" the top element is ->"<<s.top()<<endl;
//we can not use this traversing 
 /*for(int i:s)
 {
    cout<<i<<"  ";
 }*/
 cout<<endl;

}