/*About string 
*null terminator char array are not technically data typr
so c++ opertor can not be applied to them
in basically c language
ex:
concatinate two string 
comparision 
hame kebal kuch fun ka use karna padega 
*/


#include<iostream>
using namespace std;
int main()
{
   //assign fun 
   string c;
   c.assign("hello");
   cout<<c<<endl;
   string str1="hello";
   char str[]=" students :";
   string s;
   s=str1+'A';
   cout<<" the string s is "<<s<<endl;
  /* string str1("aman sukla");
   string str2;
   //str2="aman";
   cout<<" enter a name :"<<endl;
   cin>>str2;
   str2+=str1;
   cout<<str2<<endl;
   if(str1==str2)
   {
      cout<<" my name is aman:"<<endl;
   }
   return 0;*/
}