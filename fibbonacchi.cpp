#include<iostream>
using namespace std;
int fibbonachi(int n)
{
   if(n==0)
   {
   return 0;
   }
   if(n==1)
   {
   return 1;
   }
   return fibbonachi(n-1)+fibbonachi(n-2);

}
int main()
{
    int n;
    cout<<"enter number"<<endl;
    cin>>n;
    cout<<" the fibbonachi series of  given number is :"<<fibbonachi(n)<<endl;

    cout<<endl;
    return 0;
}