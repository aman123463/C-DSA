#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>v;
    cout<<"size:"<<v.size()<<endl;
    cout<<"capacity:"<<v.capacity()<<endl;
    v.push_back(1);
    cout<<"size:"<<v.size()<<endl;
    cout<<"capacity:"<<v.capacity()<<endl;
    v.push_back(5);
    cout<<"size:"<<v.size()<<endl;
    cout<<"capacity:"<<v.capacity()<<endl;
    v.push_back(43);
    cout<<"size:"<<v.size()<<endl;
    cout<<"capacity:"<<v.capacity()<<endl;
    v.push_back(3);
    cout<<"size:"<<v.size()<<endl;
    cout<<"capacity:"<<v.capacity()<<endl;
    v.push_back(6);
    cout<<"size:"<<v.size()<<endl;
    cout<<"capacity:"<<v.capacity()<<endl;
    v.resize(9);
    cout<<"size:"<<v.size()<<endl;
    cout<<"capacity:"<<v.capacity()<<endl;//v.capacity depends on compiler or size of vector :
    v.pop_back();//last ka ak size  delete kar deta he :
    v.pop_back();//v.pop_back() sze koreduce kar deta he for ex size-4 he to use 3 kar deta he :




    return 0;
}