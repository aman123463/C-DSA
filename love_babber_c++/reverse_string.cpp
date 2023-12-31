#include<iostream>
#include<stack>
#include<string>
using namespace std;
int main()
{
    string str="?.... ak ehdahg em hum eret alkuS namA";
    stack<int>s;
    for(int i=0;i<str.size();i++)
    {
        int element =str[i];
        s.push(element);
    }
    string ans="";
    while(!s.empty())
    {
        ans+=s.top();
        s.pop();
    }
    
    cout<<"the reverse form of the string is :->>"<<endl<<endl<<endl<<ans<<endl<<endl<<endl;
    cout<<"Bro fill in the blank :- magar task hai sirf 4 latter hi aana chahiye : "<<endl;
    return 0;
}
