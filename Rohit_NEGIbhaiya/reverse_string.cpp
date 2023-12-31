#include<iostream>
#include<algorithm>
using namespace std;
void reverse_string(string &str,int f,int l)
{
    if(f>=l)
    {
        return ;
    }
    swap(str[f],str[l]);
    reverse_string(str,f+1,l-1);
}
int main()
{
    string str="kismat hi hai jhatu to kya karega pandu";
    int n=str.size();
    reverse(str.begin(),str.end());
    reverse_string(str,0,n-1);
    cout<<" reversed string is :"<<str<<endl;
    return 0;
}