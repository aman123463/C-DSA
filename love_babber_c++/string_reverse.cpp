#include<iostream>
#include<string>
#include<stack>
using namespace std;
int main()
{
 string str="anurag";
 stack<char>s;
 for(int i=0;i<str.length();i++)
 {
    char ch=str[i];
    s.push(ch);
 }
 string ans="";
 while(!s.empty())
 {
    char ch1=s.top();
    ans.push_back(ch1);
    s.pop();
 }
 cout<<"the reverse string is :"<<ans<<endl;
 return 0;
}