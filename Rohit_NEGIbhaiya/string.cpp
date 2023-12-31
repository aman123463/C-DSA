#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s1="aman";
    string s2="  chaman";
    s2=s2+"l";
    string s3=s1.append(s2);
    int i=0,j=s3.size()-1;
    while(i<j)
    {
        swap(s3[i],s3[j]);
        i++;
        j--;
     }
    cout<<s3<<endl;
    /*char a[2]="\\";// escape character ->\;
    cout<<a<<endl;
    string s="aman kumar \"aman\" ";
    cout<<s<<endl;
    string ch;
    getline(cin,ch);
    cout<<ch<<endl;
    string s1="aman";
    string s2="kumer";
    s2.pop_back();
    s2.push_back('2');
    string s3=s1+s2;
    cout<<s3<<endl;
    cout<<" size is "<<s3.size()<<endl;
    cout<<s3.empty()<<endl;
    string aman="pra";
    cout<<" the size of aman variable is "<<aman.size()<<endl;
    return 0;*/
}