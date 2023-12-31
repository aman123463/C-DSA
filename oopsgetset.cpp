#include<iostream>
using namespace std;
class Hero
{
  //properties:
  public:
  int health;
  char level;
};
int main()
{
 Hero aman;
 aman.health=67;;
 aman.level='A';
 cout<<"health is :"aman.health<<endl;
 cout<<"level is :"aman.level<<endl;
 return 0;
}