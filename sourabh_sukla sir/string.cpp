#include<iostream>
#include<string>
using namespace std;
int main()
{
    //size fun 
    string g="aman";
    int j=g.size();
    cout<<" the size of the given string is :"<<j<<endl;
    //erase fun in string 
    string str7="aman kumar prajapati :";
    str7.erase();
    cout<<"using erase fun the required string is :"<<str7<<endl;
    
    
        //using assign operator in string 
    string str;
    str.assign("jay shree ram ");
    string str2="hello world";
    cout<<"using assign fun the snew string is :"<<str<<endl;
    cout<<str2<<endl;


    //using append operator in string 
    str2.append(str);//these are two way to append a string 
    str2+=str;//
    cout<<" using append fun the string is :"<<str2<<endl;

    //insert fun 
    string str3("hello");
    str3.insert(3,"354");
    cout<<"using insert fun  string is :->"<<str3<<endl;
    
    //replace fun
    string str5="jayshreeram";
    str5.replace(2,4,"A");
    cout<<" using replace fun the recurired string is :"<<str5<<endl;
    
    //find fun ->it will return the starting index where it is preent otherwise it will return  -1;
    //find ->ye left to right chalta hai 
    //rfind -> ye right to left 
    string ch="jay shree ramjkh";
    int index=ch.rfind("jay");
    cout<<" the element is present at index :"<<index<<endl;


    //compare fun==ye batata hai ki string same hai ya nahi
    /* if result is 0-> both string is same 
    *if result is -1->first string is less then secound (-1 indecate ki dono string dictonary order me hai  )
    if result is 1means->
    */
    string s1="aman";
    string s2="aman";
    int i=s1.compare(s2);
    cout<<i<<endl;


    return 0;
}