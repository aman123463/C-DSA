#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main()
{
    string s="is2 sentence4 this1 a3";
    vector<string>ans(10);
    string temp;
    int count;
    int index=0;
    while(index<s.size())
    {
        if(s[index]==' ')
        {
          int pos=temp[temp.size()-1]-'0';
          temp.pop_back();
          //ans.push_back(temp[pos]);
          ans[pos]=temp;
          temp.clear();
          count++;
        }
        else
        {
            temp+=s[index];
        }
        index++;
    }
          int pos=temp[temp.size()-1]-'0';
          temp.pop_back();
          //ans.push_back(temp[pos]);
          ans[pos]=temp;
          temp.clear();
          count++;
    for(int i=1;i<10;i++)
    {
      cout<<ans[i]<<"  ";
    }
    
    
}