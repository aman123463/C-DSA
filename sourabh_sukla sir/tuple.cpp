#include<iostream>
#include <tuple>
using namespace std;
class complex
{
    private:
    float persentage;
    char  grade;
    public :
    void setdata(float persentage,char grade)
    {
        this->persentage=persentage;
        this->grade=grade;
    }
    void getdata()
    {
        cout<<" you obtained marks: "<<persentage<<endl;
        cout<<" your grade is : "<<grade<<endl;

    }
};
int main()
{
    //make tuple ->tuple is a template class to tamplate class ka obj direct ni banta 
    //tuple<string , int , flote, complex>t1//hare t1 is a obj of tuple class where we can store 4 different data type values 
    tuple<string , int ,complex>t1
    complex obj;
    obj.setdata(98.5,'A');
    t1=make_tuple("name-aman",345,obj);
    /*tuple<string,char,int>t1;
    t1=make_tuple("aman",'A',89);*/
   cout<<get<0> (t1);
    cout<<get<1>(t1);
    
    return 0;
}