#include<iostream>
#include<array>
#include<algorithm>
using namespace std;
int main()
{
    array<int,100>a;
    
    a.fill(-53);
    for(int i=0;i<100;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}