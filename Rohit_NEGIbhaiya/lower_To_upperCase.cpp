#include<iostream>
using namespace std;
void converUpperCase(string &str,int n,int index)
{
    if(index==n)
    {
        return ;
    }
    char ch=str[index];
    char uc='A'+ch-'a';
    str[index]=uc;
    converUpperCase(str,n,index+1);
 }
int main()
{
 string str="amankumar";
 int n=str.size();
 converUpperCase(str,n,0);
 cout<<" string convert into upper case is :"<<str<<endl;
 return 0;
}