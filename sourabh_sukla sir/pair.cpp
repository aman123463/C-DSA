#include<iostream>
#include<string>
//#include<pair>
using namespace std;
class student
{
 private:
 string name;
 int rollno;
 public:
 void setdata( string name , int rollno)
 {
    this->name=name;
    this->rollno=rollno;
 }
 void showdata()
 {
    cout<<"name is->:"<<name<<" ";
    cout<<" rollno is ->:"<<rollno<<" ";
 }
};
int main()
{
 pair<string , int>p1;
 p1=make_pair("aman",456);
 pair<string,student>p2;
 cout<<p1.first<<" ";
 cout<<p1.second<<endl;
 student obj;
 obj.setdata("divyansh",23);
 p2=make_pair("live in seoni:",obj);
 cout<<p2.first<<" ";
 student s2=p2.second;
 s2.showdata();
 return 0;
}