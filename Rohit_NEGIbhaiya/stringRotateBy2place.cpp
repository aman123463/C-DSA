#include<iostream>
using namespace  std;
void rotatestringclockwise(string &str1,string str2)
{
    char ch=str1[str1.size()-1];
    int index=str1.size()-2;
    while(index>=0)
    {
        str1[index+1]=str1[index];
        index--;
    }
    str1[0]=ch;
}
void rotatestringanticlockwise(string &str1,string str2)
{
    char ch=str1[0];
    int index=1;
    while(index<=str1.size()-1)
    {
        str1[index-1]=str1[index];
        index++;
    }
    str1[str1.size()-1]=ch;

}
int main()
{
    string str1="xhaman";
    string str2="anxham";
    rotatestringclockwise(str1,str2);
     rotatestringclockwise(str1,str2);
     cout<<str1<<endl;
     rotatestringanticlockwise(str1,str2);
     rotatestringanticlockwise(str1,str2);
     cout<<str1<<endl;
   /*if(str1==str2)
   {
    cout<<" yes string is rotated by 2 place :"<<endl;
   }
   else
   {
    cout<<" not correctly rotate :"<<endl;
   }*/
    return 0;
}