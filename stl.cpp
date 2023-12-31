#include<iostream>
#include<vector>
#include<deque>
using namespace std;
int main()
{
   deque<int>a;
   a.push_front(3);
   a.push_back(9);
   a.insert(a.begin(),6,7);
   //a.insert(a.back(),3,5);
   cout<<a.at(2)<<endl;
   for(int i:a)
   {
    cout<<i<<endl;
   }   
   a.pop_back();

   //a.pop_front();
   for(int i:a)
   
    cout<<i<<endl;
   
   a.erase(a.begin(),a.begin()+5);
cout<<a.size()<<endl;
   cout<<a.empty()<<endl;

   return 0;
}

/*vector<int>v(5,2);
vector<int >a(v);
cout<<"print a"<<endl;
v.push_back(3);
cout<<v.at(2)<<endl;
cout<<endl;
cout<<endl;
cout<<a.at(4)<<endl;
for(int i:v)
{
    cout<<i<<endl;
}
cout<<v.capacity()<<endl;
/*cout<<v.at(4)<<endl;
cout<<v.size()<<endl;
cout<<v.capacity<<endl;*/

/*cout<<"capacity of vector is "<<v.capacity()<<endl;
cout<<"capacity is "<<v.size()<<endl;
//for(int i=0;i<v.size())
v.push_back();

cout<<"capacity of vector is "<<v.capacity()<<endl;
cout<<"element present in the vector is "<<v.size()<<endl;
cout<<v.front()<<endl;
cout<<v.at(0)<<endl;
cout<<v.back()<<endl;
cout<<v.size()<<endl;
v.pop_back();
cout<<v.size()<<endl;
cout<<v.capacity()<<endl;
return 0;
}*/
    

   /* int arr[7]={1,2,3,4,5,6,7};
    int ans=0;
    for(int i=0;i<7;i++)
    {
        ans=ans^arr[i];
        cout<<ans<<" ";

    }
    return 0;*/
    /*array<int,5>arr={1,2,3,4,5};
    int size=arr.size();
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"the size of the given array is "<<arr.size()<<endl;
    cout<<"element at 2nd index :"<<arr.at(3)<<endl;
    cout<<"stack is empty of not:"<<arr.empty()<<endl;

    cout<<"element of first index:"<<++arr.front()<<endl;
    cout<<"element of first index:"<<arr.front()<<endl;
    
    cout<<"element in last index is:"<<--arr.back()<<endl;
    cout<<"element in last index is:"<<--arr.back()<<endl;
    return 0;*/

