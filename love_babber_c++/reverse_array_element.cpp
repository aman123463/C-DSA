//reverse  array  element :
#include <iostream>
#include<algorithm>
#include<math.h>
#include <climits>
using namespace std;
int main() 
{
   int arr[100]={1,4,2,6,9,4,8,2,6};
   int n=9;
   int i=0;
   int j=n-1;
   while(i!=j)
    {
        swap(arr[i],arr[j]);
        i++;
        j--;
    }

    for(int i=0;i<n;i++)
   {
       cout<<arr[i]<<"  ";
   }
   return 0;
}
