#include<iostream>
using namespace std;
void print(int n)
{
    if(n<1)
    {
        return ;
    }
    else
    {
        cout<<n<<" ";
        print(n-1);
        cout<<n<<" ";
    }
}

int main()
{
  print(4);
  return 0;
}