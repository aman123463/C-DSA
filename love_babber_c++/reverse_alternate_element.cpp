#include <iostream>
#include<algorithm>
#include<math.h>
#include <climits>
using namespace std;
int main() 
{
   int arr[100]={1,4,2,6,9,4,8,2,6,2,12};
   int n=11;
   int i=0;
   for(int i=0;i<n;i+=2)
   {
    if(i+1<n)
    {
        swap(arr[i],arr[i+1]);
    }
    else
    {
        break;
    }
   }
   /*int j=1;
   while(j<=n-1)
    {
        swap(arr[i],arr[j]);
        i+=2;
        j+=2;
    }
*/

    for(int i=0;i<n;i++)
   {
       cout<<arr[i]<<"  ";
   }
   return 0;
}
