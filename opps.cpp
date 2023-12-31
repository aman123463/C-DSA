#include<iostream>
using namespace std;
class Aman
{ 
    public:
    int level ;
    char health;
    public:
    void setlevel(int l)
    {
        this->level=l;
    }
     void sethealth(char h)
    {
        this->health=h;
    }
    void getlevel()
    {
        cout<<"ramesh level is "<<level<<endl;
        
    }
     void gethealth()
    {
         cout<<"ramesh health is :"<<health<<endl;
    }
};
int main()
{
    Aman *h=new Aman;
    h->setlevel(23);
    cout<<" the level of ramesh is :"<<h->getlevel();
}