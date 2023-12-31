#include<iostream>
using namespace std;
int floor_sqrt(int n)
{
    int s=0;
    int e=n;
    long long ans=-1;
    while(s<=e)
    {
        int mid=s+(e-s)/2;
        if(mid*mid==n)
        {
            return mid;
        }
        else if(mid*mid<n)
        {
            ans=mid;
            s=mid+1;
        }
        else
        {
            e=mid-1;
        }
    }
    return ans;
}
double more_presize(int n,int presition,int tempsol)
{
     double factor=1;
     double ans=tempsol;
 for(int i=0;i<presition;i++)
 {
     factor=factor/10;
    for(double i=tempsol;i*i<=n;i+=factor)
    {
       ans=i;
    }
 }
 return ans;
}
int main()
{
    long long  n;
    cout<<" enter number whoes sqrt you went to know me:"<<endl;
    cin>>n;
    int tempsol =floor_sqrt(n);
    cout<<" the perfect square root of a given num is" <<more_presize(n,5,tempsol)<<endl;;

}