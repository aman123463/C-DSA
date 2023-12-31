#include<iostream>
using namespace std;
int main()
{
    string s="1.1.1.1.1";
    string ans;

    int i=0;
    while(s[i]!='\0')
    {
        if(s[i]=='.')
        {
            ans=ans+"[.]";
            i++;
        }
    }
    cout<<s<<endl;
    return 0;
}