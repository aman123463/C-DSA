#include<iostream>
#include<string>
using namespace std;
// using recursion
bool cheakpallindrom(string &name,int start,int end)
{

    if(start>end)
    {
        return true;
    }
    /*swap(name[start],name[end]);*/
    if(name[start]!=name[end])
    {
    return false;
    }
    else
    {
        //recursive  call
    cheakpallindrom(name,start+1,end-1);
    }
}
int main()
{
     string  name;
     cout<<" enter a string :"<<endl;
     cin>>name;
    int n=name.length();
    int start=0;
    int end=n-1;
    bool cheak=cheakpallindrom(name,start,end);
    if(cheak)
    {
        cout<<" pallindrom is possible"<<endl;
    }
    else
    {
        cout<<" not a pallindrom "<<endl;
    }
    return 0;
}
/*int main()
{
    string name="rekha";
    
    int n=name.length();
    cout<<n<<endl;
    int i=0,j=n-1;
   while(i<j)
    {
        swap(name[i],name[j]);
        i++;
        j--;
    }
    for(int i=0;i<n;i++)
    {
        cout<<name[i]<<"   ";
    }
}*/
/*void reverseString(string name,int i,int j)
{
    if(i>j)
    {
        return ;
    }
    swap(s)
}
{
    if(n==0)
    {
        return ;
    }
    
}
int main()
{
    string name="rekha";
    
    reverseString(arr);

}*/