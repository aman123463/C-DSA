#include<iostream>
using namespace std;
void print(int n)
{
    //base condition 
    if(n==0)
    {
       return ; 
    }
    //mera task hai ki mujhe 5 se 1 tak ginti print karna hai :
    //cout<<n<<" ";
    //print(n-1);//tail recursion 


    //ab mera task hai ki mujhe 1 se n tak number print karna hai 
     print(n-1);
     cout<<n<<" ";
}
int main()
{
    int n;
    cout<<" enter a number :"<<endl;
    cin>>n;
    print(n);
    return 0;
}