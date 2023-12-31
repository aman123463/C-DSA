
#include<iostream>
using namespace std;
/*void saydigit(int n,string a[])
{
    if(n==0)
    return ;
    int reminder=n%10;
    n=n/10;
   // cout<<a[reminder]<<" ";
    saydigit(n,a);
    cout<<a[reminder]<<" ";
}
int main()
{
    string a[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    int n;
    cout<<"enter any number digit"<<endl;
    cin>>n;
    saydigit(n,a);
    cout<<endl<<endl<<endl;

}*/
void saydigit(int n,string name[])
{
    if(n==0)
    return ;
    int digit=n%10;
     n=n/10;
     saydigit(n,name);
     cout<<name[digit]<<" ";
}
int main()
{
    string name[10]={"zero","one","two","three";"four","five","six","seven","eight","nine"};
    int n;
    cout<<"enter any number :"<<endl;
    cin>>n;
    saydigit(n,name);
    cout<<endl;
    return 0;
}
