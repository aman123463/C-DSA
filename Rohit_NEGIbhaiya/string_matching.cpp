#include<iostream>
#include<string.h>
using namespace std;
void find_lps(vector<int>&lps,string needle)
{
    int pre=0;
    int suff=1;
    while(suff<needle.size())
    {
        if(needle[pre]==needle[suff])
        {
            lps[suff]=pre+1;
            pre++;suff++;
        }
        else
        {
          if(pre==0)
          {
            lps[suff]=0;
            suff++;
          }
          
          else
          {
            pre=lps[pre-1];
          }
        }
    }
}
int string_matching(strind needle,string haystack)
{
vector<int>lps(needle.size(),0);
findlps(lps,needle);
int first=0;
int secound=0;
while(first<needle.size()&&secound<haystack.size())
{
    if(needle[first]==haystack[secound])
    {
        first++;
        secound++;
    }
    else{
        if(secound==0)
        {
            first++;
        }
        else
        {
          secound=lps[secound-1];
        }
    }
}
    if(secound==needle.size())
    {
        return first-secound;  
    }

return -1;
}
int main()
{
    string haystack="abacdabad";
    string needle="abad";
    int ans=string_matching(haystack,needle);
    cout<<ans<<endl;
    
    return 0;
}
/*using namespace std;
int string_matching(string haystack,string needle)
{

  int n=haystack.size();
  int m=needle.size();
  int first;
  int secound;
  for(int i=0;i<=n-m;i++)
  {
     first=i;
     secound=0;
    while(secound<m)
    {
        if(haystack[first]!=needle[secound])
        {
            break;
        }
        else
        {
            first++;
            secound++;
        }
    }
    
  }
  if(secound==m)
{
    return first-secound;
}
return -1;

}
int main()
{
    string haystack="abacdabad";
    string needle="abad";
    int ans=string_matching(haystack,needle);
    cout<<ans<<endl;
    
    return 0;
}*/