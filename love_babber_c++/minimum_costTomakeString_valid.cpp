#include<iostream>
#include<stack>
#include<string>
using namespace std;
int findMinimumCost(string &str)
{
    //base case 
    if(str.size()%2==1)
    {
        return -1;
    }
    stack<char>s;
    for(int i=0;i<str.size();i++)
    {
        char ch=str[i];
        //open braces ko stack me insert karo 
        if(ch=='{')
        {
          s.push(ch);
        } 
        else
        {
          //if } brace will come then 
          //to remove valid expression 
          if(!s.empty()&&s.top()=='{')
          {
            s.pop();
          }
          else
          {
            s.push(ch);
          }
        }
        
    }
    //stack contain invalid expression now 
    int a=0;
    int b=0;
    while(!s.empty())
    {
        if(s.top()=='}')
        {
            a++;
        }
        else
        {
            b++;
        }
        s.pop();
    }
    int ans=(a+1)/2+(b+1)/2;
    return ans;
}
int main()
{
    string str="{}}}{{}{{}{}{}";
    int ans=findMinimumCost(str);
    if(ans==-1)
    {
        cout<<"{we cant convert into valid expression :}"<<endl;
    }
    else
    {
    cout<<"{ minimum cost to make string valid is :"<<ans<<" } "<<endl;
    }
    return 0;
}