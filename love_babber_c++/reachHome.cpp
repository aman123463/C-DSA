#include<iostream>
using namespace std;
void reachHome(int dest,int src)
{
    cout<<" source is "<<src<<endl;
    if(src==dest)
    {
        cout<<" reach home :"<<endl;
        return ;
    }
    src++;
    reachHome(dest,src);
    cout<<" i am aman ";
}
int main()
{
    int dest=10;
    int src=1;
    reachHome(dest,src);
    return 0;
}
