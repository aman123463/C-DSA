
#include<iostream>
using namespace std;
int main()
{
    int a=10;
    int *ptr=&a;
    int c=*ptr;
    cout<<c;

    return 0;
}/*#include<iostream>
using namespace std;

void printarray(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int sortone(int arr[],int n)
{
    int left=0;int right=n-1;
    while(left<right)
    {
        while(arr[left]==0&&left<right)
        {
            left++;
        }
        while(arr[right]==1&&left<right)
        {
            right--;
        }
        if(left<right)
        {
            swap(arr[left],arr[right]);
            left++;
            right--;
        }
    }
}
int main()
{
    int arr[8]={1,1,0,0,1,0,1,1};
    sortone(arr,8);
    printarray(arr,8);
    return 0;
}

/*int main()
{
    int arr[4]={1,2,3,4,};
    int arr2[4]={5,6,7,4};
    for(int i=0;i<4;i++)
    {
        int element=arr[i];
        for(int j=0;j<4;j++)
        {
            if(element==arr2[j])
            {
                arr2[j]=INT_MIN;
                break;
            }
        }
    }

}
/*int findduplicate(int *arr,int size)
{
    int ans=0;
    for(int i=0;i<size;i++)
    {
        ans=ans^arr[i];
    }
    for(int i=1;i<size;i++)
    {
        ans=ans^i;
    }
    return ans;
}
int main()
{
    int ans;
int arr[9]={8,7,2,5,4,7,1,3};
 ans=findduplicate(arr,9);
cout<<ans<<endl;
return 0;

 }   /*{
        int arr[5]={1,2,3,4,4};
        int ans=0;
        for(int i=0;i<5;i++)
        {
            ans=ans^arr[i];
            cout<<"value is "<<ans<<" "<<endl;;
        }
        for(int i=1;i<4;i++)
        {
            ans=ans^i;
        }
        cout<<ans;
        return 0;
    }*/

/*void findunique(int arr[],int size)
{
    int num=0;
    for(int i=0;i<size;i++)
    {
        num=num^arr[i];
        
    }
    cout<<"the unique number in given array is "<<num<<endl;
}
int main()
{
    int arr[7];
    cout<<"enter array value:"<<endl;
    for(int i=0;i<7;i++)
    {
        cin>>arr[i];
    }
    findunique(arr,7);
    cout<<endl;
    return 0;
}
/*void printarray(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void swaparray(int arr[],int size)
{
    for(int i=0;i<size;i+=2)
    {
        if(i+1<size)
        {

            //swap(arr[i],arr[i+1]);

        }
    }
    cout<<endl;
}
int main()
{
    int even[8]={1,2,3,4,5,6,7,8};
    int odd[5]={11,12,13,14,15};
    swaparray(even,8);
    printarray(even,8);
    swaparray(odd,5);
    printarray(odd,5);
    return 0;

}*/
