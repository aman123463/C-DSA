#include<iostream>
using namespace std;
bool cheakPallindrom(string str,int start,int end)
{
    //base case
    if(start>=end)
    {
        return 1;
    }
    else if(str[start]!=str[end])
    {
        return 0;
    }
    return cheakPallindrom(str,start+1,end-1);
}
int main()
{
    string str="amlma";
    int start=0,end=str.size()-1;
    bool ans=cheakPallindrom(str,start,end);
    if(ans)
    {
        cout<<" given string is pallindrom:"<<endl;
    }
    else
    {
        cout<<" not a pallindrom: "<<endl;
    }
    return 0;
}