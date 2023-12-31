#include<iostream>
using namespace std;
void find_GCD(int num1,int num2)
{
    //bace case 
    if(num2==0)
    {
        cout<<" the GCD of the given number is "<<num1<<endl;
        return ;
    }
    find_GCD(num2,num1%num2);
}
int main()
{
    int num1;
    int num2;
    cout<<" enter two value jinka aap GCD nikalna chahte hai:"<<endl;
    cin>>num1>>num2;
    find_GCD(num1,num2);
    return 0;
}