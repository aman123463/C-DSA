#include<iostream>
using namespace std;
void doubl(int *p)//pass by pointer 
{
    for(int i=0;i<5;i++)
     *(p+i)=*(p+i)*2;
}
int main()
{
    int arr[5]={1,2,3,4,5};
    doubl(arr);
    for(int i=0;i<5;i++)
    cout<<*(arr+i)<<" ";
}
/*int main()
{
    char arr[5]={'1','2','3','4'};
    char *ptr=arr;
    cout<<&arr<<endl;
    cout<<(void*)arr<<endl;
    for(int i=4;i>=0;i--)
    {
        cout<<*(ptr+i)<<" ";
        
       
    }
    char name ='a';
    cout<<(void*)&name<<endl;
    cout<<static_cast<void*>(name)<<endl; char *ptr1=&name;
    cout<<(void*)ptr1<<endl;
    return 0;
}*/