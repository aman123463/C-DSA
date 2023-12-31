/*#include<iostream>
using namespace std;
int main()
{
    int a=10;
    int *ptr=&a;
    int** f=&a;
    cout<"the value of c is :"<<f;

    return 0;
}*/
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
     void sethealth(char n)
    {
        this->health=n;
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
    Aman b;
    b.setlevel(45);
    cout<<b.getlevel()<<endl;
    /*Aman *h=new Aman;
    h->setlevel(23);
    cout<<" the level of ramesh is :"<<h->getlevel();*/
}

