#include<iostream>
using namespace std;
void print(char ch)
{
    if(ch<'a')
    {
        return ;
    }
    else
    {
        cout<<ch<<" ";
        print(ch-1);
        //its a tail recursion 
        /*its just print only n to return condition only;*/
        cout<<ch<<" ";
        /*but its a non  tail resursion 
        non tail recursion means 
        its just like it will print 
        from n and after return statement some next line thats 
        by it will print from 1 to n;*/
    }
}

int main()
{
  print('z');
  return 0;
}