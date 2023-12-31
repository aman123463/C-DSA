#include<iostream>
using namespace std;
void print(int n)
{
    //base case
    if(n==0)
    {
        return ;
    }
    //relation rercursion
    print(n-1);
    cout<<n<<endl;//head recursive case:
}
int main()
{
    int n;
    cout<<"enter the value of n"<<endl;
    cin>>n;
    cout<<endl;
    print(n);
    return 0;
}