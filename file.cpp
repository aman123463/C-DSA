
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    //write in file 
    string st;
    ofstream fout("my.txt",ios::app);
    cout<<"enter your name:"; 
    cin>>st;
    fout<<st;//this line create channel betwwen program and file
    //cout<<"my name is \n that";

   /* string content;
    ifstream fin("friend.txt");
    fin>>content;
    //cout<<content;*/
    return 0;
}
