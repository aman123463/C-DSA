#include<iostream>
#include<stack>
#include<string>
using namespace std;
bool isValid(string &str)
{
    stack<char>s;
    for(int i=0;i<str.size();i++)
    {
        char ch = str[i];
        if(ch=='['||ch=='{'||ch=='(')
        {
            s.push(ch);
        }
        else
        {
            if(!s.empty())
            {
                
                if((ch==')'&&s.top()=='(')||(ch=='}'&&s.top()=='{')||(ch==']'&&s.top()=='['))
                {
                    s.pop();
                }
            }
            else
            {
                return 0;
            }
        }
    }
    
    if(s.empty())
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    string str="";
    
    if(str.empty())
    {
        cout<<" not a valid expression"<<endl;
        return 0;
    }
    bool ans=isValid(str);
    if(ans)
    {
        cout<<" given expression is valid :"<<endl;
    }
    else
    {
        cout<<" given expression is not valid :"<<endl;
    }
    return 0;

}