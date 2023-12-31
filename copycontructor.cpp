#include<iostream>
 using namespace std;
class aman
{  
    public:
    int age;
    char health;
    void print()
    {
        cout<<"my age is"<<this->age<<endl;
        cout<<"my present health is"<<this->health<<endl;
    }
    aman(int age,char health)
    {
        this->age=age;
        this->health=health;
    }
    aman(aman& temp )
    {
    cout<<"constructor called"<<endl;
    this->age=temp.age;
    this->health=temp.health;
    }
};
int main()
{
    aman obj1(23,'h');
    obj1.print();
    aman obj2(obj1);
    obj2.print();
    return 0;

}