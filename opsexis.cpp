#include<iostream>
using namespace std;
class hero{
    public:
    char level;
    private:
    int health;
    //class ke bahar level ko axis nahi kar payunga 
    //now we are going to use  (get/set)er taki ham private variabler ko class ke bahar axis kar sake a;
    //yah tarika he jisse me level jo ki mene private rakkha he use axis karne ka 
    char getlevel{
        return level;
    }

    int gethealth{
        return health;
    }

    void setlevel(char ch)
    {
         level=ch;
    }

     void sethealth(int h){
        health=h;
    }







};
int main()
{
    hero aman;
    aman.sethealth(70);
    cout<<"aman health is :"<<aman.gethealth()<<endl;
}