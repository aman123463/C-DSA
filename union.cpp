#include<iostream>
using namespace std;
typedef union stddetails
{
    int marks;
    float cgpa;
    char favchar;
}stdd;
int main()
{
stdd m1;//mene jab m1.marks=98 assign kiya and use printy kiya to  98 value output//
// me mil jayegi but jyese hi menne m1.cgpa =9.8 assign kiya fir m1.marks ko print karaya to mujhe garbage value mili 
m1.marks=98;
m1.cgpa=9.8;
m1.favchar='r';
//cout<<m1.cgpa<<endl;//reat only one output otherwise it creat a problum at a time you can c.it not creat a problum 
//it fill in memory a garbage value ;
//cout<<m1.marks<<endl;
cout<<m1.marks<<endl;
}