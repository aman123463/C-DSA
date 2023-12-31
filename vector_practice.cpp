#include<iostream>
using namespace std;
#include<vector>
int main()
{
    int n;
    cout<<" enter the size of vector :"<<endl;
    cin>>n;
    vector<int>v(n);
    v={1,2,3,4,5};
    cout<<v.at(3)<<endl;
    cout<<v.empty()<<endl;
    cout<<v.front()<<endl;
    cout<<v.back()<<endl;
    v.push_back(4);
    v.push_back(67);
    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<"  ";
    }
    for(auto it=v.begin();it!=v.end();it++)
    {
        cout<<
    }
    
    return 0;
}