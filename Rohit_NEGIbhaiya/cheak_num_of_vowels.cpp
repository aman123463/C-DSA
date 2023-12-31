#include<iostream>
using namespace std;
int count_vowel(string str,int index,int n,int count)
{
    if(index==n)
    {
        return count;
    }
    if(str[index]=='a'||str[index]=='e'||str[index]=='i'||str[index]=='o'||str[index]=='u')
    {
        count++;
    }
    return count_vowel(str,index+1,n,count);
}
int main()
{
   string str="hgrwuyw4urgerqbwtvefejhqktgu4";
   int n=str.size();
   int count=count_vowel(str,0,n,0);
   cout<<" there are "<<count<<" vowels in the given string :"<<endl;
   return 0;
}