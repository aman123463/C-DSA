
#include<iostream>
#include<vector>
using namespace std;
void sortSentence(string s)
{
 vector<string>ans(10);
     int index=0;
     int count=0;
     string temp="";
     while(index<s.size())
     {
         if(s[index]==' ')
         {
            int pos=temp.back()-'0';
             temp.pop_back();
             ans[pos]=temp;
             temp="";
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
             ans[pos]=temp;
             temp.clear();
             count++;

    for(int i=1;i<=count;i++)
    {
       temp+=ans[i];
        temp+=' ';
      //  cout<<i<<" "<<ans[i]<<endl;
    }
    temp.pop_back();
    cout<<" sorted sentence is->"<<temp<<endl;
}
int main()
{
    string str="is2 sentence4 This1 a3";
    sortSentence(str);
    return 0;
}
    