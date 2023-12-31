#include<iostream>

using namespace std;
class buddy
{
    private:
    int a,s;
    const int x;//const member variable ko iniotialize karne ke liye use hota hai initializer 
    int &y;//also reference varialbe ko use karne ke liye bhi hota hai 
    public :
    buddy(int &n):x(8),y(n)
    
    {
    }
     void fun()
    {
        cout<<"and also the value of y is"<<this->y<<endl;
        cout<<" the value of this const variable is "<<this->x<<endl;
    }
};
int main()
{
    int m=9;
    buddy b(m);
    b.fun();
    return 0;

}