#include<iostream>
using namespace std;
   int power(int a,int b)
   {
//returntype :: function name::arguments(input parameters) ;
//function body
    // int a,b;
     //cin>>num1;
     //cin>>num2;
      //int ans=1;
      int n=1;
      for(int i=0;i<b;i++)
      {
        n=n * a;
      }
      return n;//return statement  power function ko value de degi -->1
     
}
int main()
{
      int a,b;
      cout<<"enter the value of a and b"<<endl;
      cin>>a;
      cin>>b;
       int p= power( a, b);//function call;-->put the value of equattion 1;
      cout<<"the power(a,b) is :"<<p<<endl;
      
    return 0;
}